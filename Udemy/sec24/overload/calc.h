#ifndef _CALC_H_
#define _CALC_H_

class CCalc {
private:
	int m_a, m_b;
public:
	//  デフォルトコンストラクタ
	CCalc();
	//  コンストラクタ
	CCalc(int a, int b);
	//  足し算の処理1
	int add();
	//  足し算の処理2
	int add(int a, int b);
	//  値の設定
	void setValue(int a, int b);
	//  値の取得(m_a)
	int getA();
	//  値の取得(m_b)
	int getB();
};

#endif // _CALC_H_