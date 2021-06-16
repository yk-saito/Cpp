/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 20:55:54 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/16 23:48:06 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 引数関係のクラス
		* 引数の数チェック
		* ファイル名、s1、s2をセット
*/

// 引数が<3 or >3
	// エラー出力
	// return
// 引数が三つある
// ファイルを開く
// if (ファイルが存在しないor開けない)
	// エラー出力
	// return
// ファイルの中身を読み取る
// if (s1が見つかった)
	// s2に置き換える
// ファイルを閉じる

#include <iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout  << "Incorrect number of arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	std::string		fileName = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::fstream	file;

	file.open(fileName, );



	return (EXIT_SUCCESS);
}