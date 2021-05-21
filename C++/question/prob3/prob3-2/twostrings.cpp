#include <string>
#include "twostrings.h"

//  一つ目の文字列を設定
void	TwoStrings::setString1(string s)
{
	m_string1 = s;
}

//  二つ目の文字列を設定
void	TwoStrings::setString2(string s)
{
	m_string2 = s;
}

//  一つ目の文字列を取得
string	TwoStrings::getString1()
{
	return (m_string1);
}

//  二つ目の文字列を取得
string	TwoStrings::getString2()
{
	return (m_string2);
}

//  二つの文字列をつないだものを取得
string	TwoStrings::getConnectedString()
{
	return (m_string1 + m_string2);
}

//  getConnectedString()で得られる文字列の長さを取得
int	TwoStrings::getConnectedLength()
{
	int	length_str1;
	int	length_str2;

	length_str1 = m_string1.length();
	length_str2 = m_string2.length();
	return (length_str1 + length_str2);
}