/*67.ʹ������ָ���vetctor��̬�ڴ���ö�д������ȡ�ʹ�ӡ����*/
#include <new>
#include <vector>
#include <iostream>
using namespace std;

vector<int> *func1() {
	return new (nothrow) vector<int>;//����new int��
}

void read(vector<int> *p) {
	cout << "��������������" << endl;
	int n;
	while (cin >> n) {
		p->push_back(n);
		if (getchar() == '\n')
			break;
	}
}

void print(vector<int> *p) {
	cout << "���������" << endl;
	for (auto it = p->begin(); it != p->end(); it++) {
		cout << *it << " ";
	}
	cout << endl << "��Χforѭ�������" << endl;
	//��Χforѭ�����Ա���ָ������ã�p��ָ��������̬�ڴ棬�����õö�̬�ڴ����
	for (auto it : *p) {//&����ν������Ҫ�޸�Ԫ��
		cout << it << " ";
	}
}

int main() {
	vector<int> *p = func1();
	if (!p) {
		cerr << "�ڴ�ľ�" << endl;
	}
	read(p);
	print(p);
	delete p;
	p = nullptr;

	return 0;
}
