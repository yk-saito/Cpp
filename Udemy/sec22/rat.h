#ifndef _RAT_H_
# define _RAT_H_

class CRat
{
	public:
		CRat();
		~CRat();
		static void	showNum();
		void		squeak();
	private:
		int			m_id;		//各インスタンスで異なる値(rat0, rat1, rat2....)
		static int	m_count;	//このプログラム全体に共通する値
};

#endif /* _RAT_H_ */