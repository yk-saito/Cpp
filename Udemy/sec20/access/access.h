#ifndef _ACCESS_H_
# define _ACCESS_H_

class Access
{
	public:
		int	a;	//publicなメンバ変数
	private:
		int	b;	//privateなメンバ変数
	public:
		void	func1();
	private:
		void	func2();
};

#endif