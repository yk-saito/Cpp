#ifndef _VECTOR_HPP_
#define _VECTOR_HPP_

//  ベクトルクラス
class Vector{
private:
    double m_x;
    double m_y;
public:
    //  デフォルトコンストラクタ
    Vector();
	//  コンストラクタ
	Vector(double add_x, double add_y);
    //  成分の設定
    void set(double x, double y);
    //  x成分の取得
    double getX();
    //  y成分の取得
    double getY();
};

#endif // _VECTOR_HPP_