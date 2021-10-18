/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:12:23 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/17 21:19:52 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define	MAX_VAL 750

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

        /*  add  */
        // if (i < 3)
        //     std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
        /*********/
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);

        /*  add  */
        // std::cout << "\n----- check 1 -----" << std::endl;
        // std::cout << "numbers[0]: " << numbers[0] << std::endl;
        // std::cout << "    tmp[0]: " << tmp[0] << std::endl;
        // std::cout << "   test[0]: " << test[0] << std::endl;

        // tmp[0] = 11;
        // test[0] = 22;

        // std::cout << "----- check 2 -----" << std::endl;
        // std::cout << "numbers[0]: " << numbers[0] << std::endl;
        // std::cout << "    tmp[0]: " << tmp[0] << std::endl;
        // std::cout << "   test[0]: " << test[0] << '\n' << std::endl;
        /*********/
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
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();

        /*  add  */
        // if (i < 3)
        //     std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
        /*********/
    }
    delete [] mirror;//
    return 0;
}
