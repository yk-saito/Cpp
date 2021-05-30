#ifndef _COUNTER_HPP_
#define _COUNTER_HPP_

//  カウンタークラス
class Counter{
private:
    //  カウント
    int m_count;
public:
    //  コンストラクタ
    Counter();
    //  カウンタをリセット
    void reset();
    //  カウントされた回数を取得
    int getCount();
    //  1ずつカウント
    void count();
	//  与えた引数の数だけ、回数をカウントする
	void	count(int count);
};

#endif // _COUNTER_HPP_