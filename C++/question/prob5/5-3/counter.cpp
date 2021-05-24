#include "counter.h"

/*
** 初期値0に設定
*/
int Counter::m_totalCount = 0;
//  コンストラクタ（カウント回数を0で初期化）
Counter::Counter() : m_count(0)
{
}
void Counter::reset()
{
    m_totalCount -= m_count;
    m_count = 0;
}
void Counter::count(){
    m_count++;
    m_totalCount++;
}
int Counter::getCount(){
    return m_count;
}

int Counter::getTotalCount()
{
    return (m_totalCount);
}