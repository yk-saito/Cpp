#include "counter.hpp"

//  コンストラクタ
Counter::Counter() : m_count(0)
{

}
//  カウンタをリセット
void Counter::reset()
{
    m_count = 0;
}
//  回数を取得
int Counter::getCount()
{
    return m_count;
}
//  1ずつカウント
void Counter::count()
{
    m_count++;
}

/*
** 与えた引数の数だけ、回数をカウントする
*/
void	Counter::count(int count)
{
	m_count += count;
}