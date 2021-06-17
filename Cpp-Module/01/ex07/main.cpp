/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 20:55:54 by ysaito            #+#    #+#             */
/*   Updated: 2021/06/17 16:44:53 by ysaito           ###   ########.fr       */
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
#include <cstdlib>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout  << "Incorrect number of arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	std::string		fileName = argv[1];
	std::string		srcStr = argv[2];
	std::string		replaceStr = argv[3];
	std::fstream	file;

	file.open(fileName, std::ios::in);
	if (! file.is_open())
	{
		std::cerr << "ファイルが開けませんでした。" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string		buf; //fileの読み込みに使用
	std::string		newFileName; //新しく作成するreplaceファイル名
	std::fstream	newFile;	// replaceファイルを操作するfstreamのインスタンス

	/*
	新しいファイル名を作成
	*/
	std::string::size_type	posExt = 0; // postion extension
	posExt = fileName.find(".", posExt);
	// 拡張子なし
	if (posExt == std::string::npos)
	{
		newFileName = fileName + ".replace";
	}
	// 拡張子あり
	else
	{
		newFileName = fileName.substr(0, posExt) + ".replace";
	}

	newFile.open(newFileName, std::ios::out);
	if (! newFile.is_open())
	{
		std::cerr << "新しいファイルが作成できませんでした。" << std::endl;
		file.close();
		return (EXIT_FAILURE);
	}

	while (std::getline(file, buf))
	{
		if (! buf.empty())
		{
			std::string::size_type	pos = 0;
			while ((pos = buf.find(srcStr, pos)) != std::string::npos)
			{
				buf.replace(pos, srcStr.length(), replaceStr);
				pos += replaceStr.length();
			}
		}
		newFile << buf << std::endl;
	}
	file.close();// デストラクタで閉じてくれるみたい。あくまで明示的に書いた
	newFile.close();
	return (EXIT_SUCCESS);
}