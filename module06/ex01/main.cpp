/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:15:52 by ysaito            #+#    #+#             */
/*   Updated: 2021/10/11 10:44:17 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include <stdint.h>

struct  Data
{
	std::string	name;
	int			level;
	std::string	weapon;
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t	raw_data;

	raw_data = reinterpret_cast<uintptr_t>(ptr);
	return (raw_data);
}

Data* deserialize(uintptr_t raw)
{
	Data	*deserialize_data;

	deserialize_data = reinterpret_cast<Data*>(raw);
	return (deserialize_data);
}

int     main()
{
	Data		data;
	uintptr_t	raw_data;

	data.name = "Bob";
	data.level = 42;
	data.weapon = "Sword";

	std::cout << "--------------------------------" << std::endl
			  << "Pointer check 1 [" << &data << "]"<< std::endl
			  << "--------------------------------" << std::endl
			  << "     name: " << data.name << "   [" << &data.name << "]" << std::endl
			  << "    level: " << data.level << "    [" << &data.level << "]" << std::endl
			  << "   weapon: " << data.weapon << " [" << &data.weapon << "]" << std::endl;

    raw_data = serialize(&data);

	Data		*deserialize_data = deserialize(raw_data);

	std::cout << "--------------------------------" << std::endl
			  << "Pointer check 2 [" << deserialize_data << "]" << std::endl
			  << "--------------------------------" << std::endl
			  << "     name: " << deserialize_data->name << "   [" << &deserialize_data->name << "]" << std::endl
			  << "    level: " << deserialize_data->level << "    [" << &deserialize_data->level << "]" << std::endl
			  << "   weapon: " << deserialize_data->weapon << " [" << &deserialize_data->weapon << "]" << std::endl;
        return (0);
}
