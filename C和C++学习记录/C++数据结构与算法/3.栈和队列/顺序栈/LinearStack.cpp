#include "stack.h"
#include <iostream>
//ջ��Ӧ�á�ʮ����ת��Ϊ������
using namespace std;
//ת������
void conversion(int n,int base) {
	int  y;
	y = n;
	LinearStack<int> lstack(100);
	while (y) {
		lstack.push((y%base));
		y = y / base;
	}
	cout << "ʮ��������" << n << " base:" << base << endl;
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