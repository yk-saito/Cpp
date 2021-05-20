#include <iotream>
#include "sample.h"

using namespace	std;

int	main(void)
{
	CSample obj1, obj2;	// CSampleのインスタンスを複数作成 ex:モンスターを複数作成して、それぞれでHP/DF/PWを管理とか

	obj1.set(1);
	obj2.set(2);

	cout << "obj1:" << obj1.get() << endl; // obj1のメンバ変数の値を出力
	cout << "obj1:" << obj2.get() << endl; // obj2のメンバ変数の値を出力

	return (0);
}