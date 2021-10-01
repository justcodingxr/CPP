#include "stack.h"
#include <iostream>
//栈的应用。十进制转换为二进制
using namespace std;
//转换函数
void conversion(int n,int base) {
	int  y;
	y = n;
	LinearStack<int> lstack(100);
	while (y) {
		lstack.push((y%base));
		y = y / base;
	}
	cout << "十进制数：" << n << " base:" << base << endl;
	cout << lstack;
	while (!lstack.isEmpty()) {
		int x;
		lstack.pop(x);
		cout << x;
	}

}

int main() {
	conversion(100, 2);

	return 0;
}