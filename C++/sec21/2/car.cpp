#include <iostream>
#include "car.h"

using namespace	std;

/*
** コンストラクタ	クラスCCarを宣言（インスタンス化）した際に実行される == いわゆる、初期化メソッド
*/
CCar::CCar(void) : m_fuel(0), m_migration(0)
{
	cout << "CCarオブジェクト生成" << endl;
}

/*
** デストラクタ		プログラムの一番最後に実行される == いわゆる、終了処理メソッド
*/
CCar::~CCar(void)
{
	cout << "CCarオブジェクト破棄" << endl;
}

/*
** 移動メソッド
*/
void	CCar::move(void)
{
	if (m_fuel > 0)
	{
		m_migration++;
		m_fuel--;
	}
	cout << "移動距離" << m_migration << endl;
	cout << "燃料" << m_fuel << endl;
}

/*
** 燃料補給メソッド
*/
void CCar::supply(int fuel)
{
	if (fuel >= 0)
	{
		m_fuel += fuel;
	}
	cout << "燃料" << m_fuel << endl;
}