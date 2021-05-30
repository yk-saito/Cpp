#include "calc.h"

//  デフォルトコンストラクタ
CCalc::CCalc() : m_a(0), m_b(0)
{
}
//  コンストラクタ（引数付き）
CCalc::CCalc(int a, int b) : m_a(a), m_b(b)
{

}
//  足し算処理1
int CCalc::add()
{
	return m_a + m_b;
}
//  足し算処理2
int CCalc::add(int a, int b)
{
	return a + b;
}
//  値の設定
void CCalc::setValue(int a, int b)
{
	m_a = a; m_b = b;
}
//  値の取得(m_a)
int CCalc::getA()
{
	return m_a;
}
//  値の取得(m_b)
int CCalc::getB()
{
	return m_b;
}