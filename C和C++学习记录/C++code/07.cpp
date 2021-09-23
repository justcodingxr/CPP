/*07.指针和字符指针的特殊处*/
/*常量赋给变量；形参，对象赋给引用；
对象取地址赋给指针（常量赋给变量）；
引用指针是指针存放的地址；
常量赋给变量，变量取地址赋给一级指针，一级指针取地址赋给二级指针，输出变量，
一级指针，二级指针内容都是一样的，输出他们的地址都不一样；
数组名是第一个元素取地址，引用数组是整个数组取地址；
指针解引用是解所存地址所存的值；
若a=1；*b=&a；**p=&b则p是二级指针，所存的是一级指针的地址，输出p是&b，
输出*p是&a（或者说一级指针*b），输出**p是1;

	char c[6] = "hello";
	char *p = &c[0];
	cout << *p << endl;//解引用，指针保存的首元素的地址的值
	cout << p << endl;//字符指针的特殊，不是输出首元素地址，而是整个字符串
*/
#include <iostream>
using namespace std;

int main() {

	int a = 1;
	int *b = &a;
	cout << a << endl
	     cout << &a << endl;//1存的地址
	cout << b << endl;//输出指针，输出指针保存的地址
	cout << *b << endl;//解引指针保存的地址存的值
	cout << endl;

	int z[8] = {4, 3, 5, 8, 7};
	int *f = &z[0];
	cout << z[0] << endl;//首元素
	cout << &z[0] << endl;//首元素的地址
	cout << f << endl;//指针保存的首元素的地址
	cout << *f << endl;//解引用，指针保存的首元素的地址的值
	cout << &f << endl;//存放指针的地址
	cout << &f + 1 << endl << &f + 2 << endl << &f + 3 << endl;

	char c[6] = "hello";
	char *p = &c[0];
	cout << *p << endl;//解引用，指针保存的首元素的地址的值
	cout << p << endl;//字符指针的特殊，不是输出首元素地址，而是整个字符串
	cout << &p << endl;//指针保存的首元素的地址
	cout << &p + 1 << endl << &p + 2 << endl << &p + 3 << endl;


	return 0;
}