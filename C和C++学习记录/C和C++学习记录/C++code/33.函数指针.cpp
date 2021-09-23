/*33.函数指针
2021-09-15 13:55 */

#include <iostream>
#include <vector>
using namespace std;
//加
int func1(int a, int b) {
	return 	a + b;
}

//减
int func2(int a, int b) {
	return a - b;
}

int func3(int a, int b) {
	return a * b;
}

int func4(int a, int b) {
	return a / b;
}

int use(decltype(func1) *p, int a, int b) {
	//使用函数指针
	return p(a, b);
}

int main() {
	//这几个函数可以赋予同类型的函数指针
	decltype(func1) *p1 = func1, *p2 = func2, *p3 = func3, *p4 = func4;
	//存入vector
	vector<decltype(func1) *> v1;
	v1 = {p1, p2, p3, p4};

	for (auto p : v1) {//使用函数指针
		cout << use(p, 3, 5) << endl;
	}
	return 0;
}
