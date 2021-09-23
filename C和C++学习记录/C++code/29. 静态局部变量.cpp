/*29. 静态局部变量
2021-09-14 15:18
*/
#include <iostream>
using namespace std;


//定义一个函数每次调用返回值加1
int fun() {
	static int count = -1;
	++count;
	return count;
}

//定义一个函数每次调用返回值加1
int function() {
	return 0;
}

int main() {

	for (int i = 0; i < 5; i++) {
		cout << fun() << endl;
	}

	for (int i = 0; i < 5; i++) {
		cout << function << endl;
	}
	for (int i = 0; i < 5; i++) {
		cout << fun << endl;
	}
	return 0;
}
