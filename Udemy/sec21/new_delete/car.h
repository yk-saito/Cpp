#ifndef _CAR_H_
# define _CAR_H_

class CCar
{
	public:
		CCar(void);		// コンストラクタ
		~CCar(void);	// デストラクタ
		void	move(void);			// 移動メソッド
		void	supply(int fuel);	// 燃料補給メソッド
	private:
		int	m_fuel;			// 燃料
		int	m_migration;	// 移動距離
};

#endif //_CAR_H_