#include <iostream>
#include "b.h"
#include <iostream>
using namespace std;

int main() {

	LinearList<int> List(10);//LinearList<int>ģ����

	List.insert(1, 100);
	List.insert(2, 200);
	List.insert(3, 300);
	List.insert(4, 400);
	cout << "��ǰ���ȣ�" << List.getLength() << endl;
	cout << "��ǰԪ�أ�" << List;//�������������<<
	int m;
	if (List.getData(3, m)) {
		cout << "������Ԫ�أ�" << m << endl;
	}
	int x = 200;
	cout << "Ԫ��200�ڱ���λ�ã�" << List.find(x) << endl;

	//��200��Ϊ250
	List.modifyData(List.find(x), 250);
	if (List.getData(2, x)) {
		cout << "�ڶ���Ԫ�أ�" << x << endl;
	}
	return 0;
}
