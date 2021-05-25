#ifndef _CDATA_H_
#define _CDATA_H_

#include <iostream>
#include <string>

using namespace std;

class	CData
{
	private:
		//  メンバ変数number
		int number;
		//  メンバ変数comment
		string comment;
	public:
		//  初期化
		void	init();

		void	setNumber(int num);// add
		int		getNumber();
		void	setComment(string str);// add
		string	getComment();
};

#endif // _CDATA_H_