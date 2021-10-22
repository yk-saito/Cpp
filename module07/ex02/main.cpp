/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:12:23 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/22 21:10:45 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Array.hpp"

#define	MAX_VAL     750
#define ARRAY_SIZE  3

class   Dog {
public:
    Dog() : name_("no name"), age_(0) {}
    Dog(const std::string name, unsigned int age) : name_(name), age_(age) {}
    Dog(const Dog& other) {
        *this = other;
    }
    Dog&	operator=(const Dog& other) {
		if (this == &other)
			return (*this);
		this->name_ = other.name_;
        this->age_ = other.age_;
		return (*this);
	}
    ~Dog() {}
    std::string getName() const { return (this->name_); }
    unsigned int getAge() const { return (this->age_); }
private:
    std::string     name_;
    unsigned int    age_;
};

std::ostream&	operator<<(std::ostream& os, const Dog& other)
{
	os << "Name[ " << other.getName() << " ] Age[ " << other.getAge() << " ]";
	return os;
}

template <typename T>
void    show_array_elements(const Array<T> array, const size_t size, const std::string variable_name)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << variable_name << "[" << i << "] = " << array[i] << std::endl;
    }
    std::cout << std::endl;

}

int	main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    /* add */
    show_array_elements(numbers, ARRAY_SIZE, "numbers");
    /*******/

    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);

        /* add */
        std::cout << "----- check 1 -----" << std::endl;
        show_array_elements(tmp, ARRAY_SIZE, "tmp");
        show_array_elements(test, ARRAY_SIZE, "test");

        tmp[0] = 11;
        test[0] = 22;

        std::cout << "----- check 2 -----" << std::endl;
        show_array_elements(numbers, ARRAY_SIZE, "numbers");
        show_array_elements(tmp, ARRAY_SIZE, "tmp");
        show_array_elements(test, ARRAY_SIZE, "test");
        /*******/
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n' << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    /* add */
    show_array_elements(numbers, ARRAY_SIZE, "numbers");
    /*******/
    delete [] mirror;//


    /*********************/
    /* Test complex type */
    /*********************/
    std::cout << "-----Test complex array-----" << std::endl;

    Array<Dog> dogs(ARRAY_SIZE);
    show_array_elements(dogs, ARRAY_SIZE, "dogs");

    Array<Dog> tmp_dogs = dogs;
    Array<Dog> test_dogs(tmp_dogs);

    show_array_elements(tmp_dogs, ARRAY_SIZE, "tmp_dogs");
    show_array_elements(test_dogs, ARRAY_SIZE, "test_dogs");

    dogs[0] = Dog("kotaro", 5);
    tmp_dogs[0] = Dog("nana", 2);
    test_dogs[0] = Dog("momo", 10);

    std::cout << "-----   Check rename   -----" << std::endl;
    show_array_elements(dogs, ARRAY_SIZE, "dogs");
    show_array_elements(tmp_dogs, ARRAY_SIZE, "tmp_dogs");
    show_array_elements(test_dogs, ARRAY_SIZE, "test_dogs");

    try
    {
        dogs[10] = Dog("ace", 4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    /********************/
    /* Test empty array */
    /********************/
    std::cout << "\n----- Test empty array -----" << std::endl;
    try
    {
        Array<int> empty;

        std::cout << "empty array size: " << empty.size() << std::endl;
        std::cout << empty[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    /********************/
    /* Test const array */
    /********************/
    std::cout << "\n----- Test const array -----" << std::endl;
    Array<int> src(ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        src[i] = i;
    }
    show_array_elements(src, ARRAY_SIZE, "src");

    const Array<int> dest(src);
    show_array_elements(dest, ARRAY_SIZE, "dest");

    return (0);
}
