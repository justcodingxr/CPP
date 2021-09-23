/*32.二维数组传参
2021-09-14 18:40 */
#include <iostream>
using namespace std;

void f1(int n, char str[][10]) {
	for (int i = 0; i < n; i++) {
		cout << str[i] << endl;//数组下标访问
	}
}


void f2(int n, char (*str)[10]) {
	for (int i = 0; i < n; i++) {
		cout << *str << endl;
		str++;//指向一维数组的指针后移
	}
}

void f22(int n, char (*str)[10]) {
	for (int i = 0; i < n; i++) {
		cout << str[i] << endl;//???某种转换

	}
}

void f3(int n, char  **str) {
	for (int i = 0; i < n; i++) {
		cout << str[i] << endl;//二级指针下标访问一维数组
	}
}
int main() {

	char str[5][10] = {"ada", "dwd", "kdiwfgfjc", "dwihdi"};

	f1(5, str);
	cout << "=======" << endl;

	f2(5, str);
	cout << "=======" << endl;

	f22(5, str);
	cout << "=======" << endl;

	char *p[4];
	p[0] = &str[0][0];
	p[1] = str[1];
	p[2] = str[2];
	p[3] = str[3];
	f3(5, p);
	cout << "=======" << endl;
	return 0;
}

