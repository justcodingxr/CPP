/*32.��ά���鴫��
2021-09-14 18:40 */
#include <iostream>
using namespace std;

void f1(int n, char str[][10]) {
	for (int i = 0; i < n; i++) {
		cout << str[i] << endl;//�����±����
	}
}


void f2(int n, char (*str)[10]) {
	for (int i = 0; i < n; i++) {
		cout << *str << endl;
		str++;//ָ��һά�����ָ�����
	}
}

void f22(int n, char (*str)[10]) {
	for (int i = 0; i < n; i++) {
		cout << str[i] << endl;//???ĳ��ת��

	}
}

void f3(int n, char  **str) {
	for (int i = 0; i < n; i++) {
		cout << str[i] << endl;//����ָ���±����һά����
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

