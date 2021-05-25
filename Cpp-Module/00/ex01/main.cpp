/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:15:55 by ysaito            #+#    #+#             */
/*   Updated: 2021/05/25 16:31:01 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ADD command
		first name, last name, nickname,
		login, postal address, email address,
		phone number, birthday date, favorite meal,
		underwear color and darkest secret.
	->連絡先は、クラスのインスタンスとする.

**	SEARCH command
		index, first name, last name, nickname.
	->各列幅10文字
	->右揃え
	->'|'で区切る
	->10文字より長ければ、切り捨てで、最後に'.'を表示する.
	-->次に、indexを入力させる
**	EXIT command
		プログラム終了＆＆データ消去
*/

//コマンドの入力を待つ
// if (ADD)
	// データを入力してもらう
	// データを保存
// else if (SEARCH)
	// データの一覧の概要を表示する
	// indexの入力待ちをする
	// if (error index)
		// エラー出力
		// indexの入力待ちをする
	// 入力されたindexのデータを表示する
// else if (EXIT)
	// 全てのインストラクタを消去（電話帳のデータ）
	//プログラム終了
// else (error)
	// 正しいコマンドを入力してもらう

#include "phonebook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	std::string	command;

	while (1)
	{
		std::cout << "Waiting for input >> ";
		std::cin >> command;
		if (command.compare("ADD") == 0)
		{
			std::cout << "input ADD command" << std::endl;
			if (Phonebook::getCount() == 7)
			{
				std::cout << "Phonebook is full." << std::endl;
			}
			//データの入力
			Phonebook	*
			std::cout << "first name: ";
			std::cin >>
		}
		else if (command.compare("SEARCH") == 0)
		{
			std::cout << "input SEARCH command" << std::endl;
		}
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "input EXIT command" << std::endl;
			return (0);
		}
		else
		{
			std::cout << "Please input the ADD command, the SEARCH command or the EXIT command." << std::endl;
			std::cout << "Waiting for input >> ";
			std::cin >> command;
		}
	}
		return (0);
}