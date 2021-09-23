/*69.char*和字符串拼接实现与动态数组和字符数组*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//char *strcat(char *dest, const char *src)函数原型
	char *ch1 = "dwdw";
	char *ch2 = "fef";
	char *p = new char[strlen(ch1) + strlen(ch2) + 1];
	//输出char *指针会输出字符串。
	//字符数组char c[20]={'s','d'};char *t=c；输出数组名和字符指针都是输出整个字符串
	cout << "ch1:" << ch1 << " " << "ch2:" << ch2 << endl;

	//输出整数数组名，会输出首元素地址，输出整数指针也是
	int num[5] = {1, 5, 6, 4};
	int *pn = num;
	cout << "num:" << num << endl;
	cout << "pn:" << pn << endl;

	//char*可以用字符串常量"abc"初始化或赋值，也可以用char*初始化或赋值
	char *ch1q = ch1 ;
	cout << "ch1q:" << ch1q << endl;
	ch1q = ch2;
	cout << "ch1q:" << ch1q << endl;
	ch1q = "a";
	cout << "ch1q:" << ch1q << endl;

	//strcat不能拼接两个字符常量"abc","def"的char *.
//	strcat(ch1, ch2);
//	cout << ch1 << endl;

	//strcat可以拼接一个字符数组的char *和一个字符常量的char*
	char c[20] = {'a', 'b'};
	cout << "c[20]:" << c << endl;
	char *q = c;
	cout << "q:" << q << endl;
	strcat(q, ch2);
	cout << "q:" << q << endl;

	strcpy(p, ch1);
	//strcat可以拼接一个动态数组的char *和一个字符常量的char*
	strcat(p, ch2);
	//输出char *动态数组指针会输出字符串。
	cout << p << endl;



	char src[15], dest[20];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	strcat(dest, src);
	printf("最终的目标字符串： |%s|", dest);

	strcpy(dest, src);
	printf("\n最终的目标字符串： |%s|", dest);
	return 0;
}
