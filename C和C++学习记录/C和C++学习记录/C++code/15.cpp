/*15.����������ȡ���ظ�������*/
#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "����һ����������";
	cin >> a;
	while (a != 0) {
		int b = a % 10;
		cout << b;
		a = (int)(a / 10);
	}

	return 0;
}
