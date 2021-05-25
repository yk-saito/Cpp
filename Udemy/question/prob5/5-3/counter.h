#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter
{
	private:
		//  回数
		int m_count;
		// add
		static int	m_totalCount;
	public:
		//  コンストラクタ
		Counter();
		//  リセット
		void reset();
		//  カウント
		void count();
		//  カウントの数
		int getCount();
		// add
		static int	getTotalCount();
};

#endif // _COUNTER_H_