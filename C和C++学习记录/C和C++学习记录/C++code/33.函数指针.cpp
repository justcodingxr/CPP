/*33.����ָ��
2021-09-15 13:55 */

#include <iostream>
#include <vector>
using namespace std;
//��
int func1(int a, int b) {
	return 	a + b;
}

//��
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
	//ʹ�ú���ָ��
	return p(a, b);
}

int main() {
	//�⼸���������Ը���ͬ���͵ĺ���ָ��
	decltype(func1) *p1 = func1, *p2 = func2, *p3 = func3, *p4 = func4;
	//����vector
	vector<decltype(func1) *> v1;
	v1 = {p1, p2, p3, p4};

	for (auto p : v1) {//ʹ�ú���ָ��
		cout << use(p, 3, 5) << endl;
	}
	return 0;
}
