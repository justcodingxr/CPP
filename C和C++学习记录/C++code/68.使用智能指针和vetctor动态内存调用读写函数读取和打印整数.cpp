/*68.ʹ������ָ���vetctor��̬�ڴ���ö�д������ȡ�ʹ�ӡ����*/
#include <new>
#include <vector>
#include <iostream>
#include <memory>
using namespace std;

shared_ptr<vector<int>> func1() {
	return make_shared<vector<int>>();//make_shared<vector<int>>()�Ǻ�����������Ҫ��

}

void read(shared_ptr<vector<int>> p) {
	cout << "��������������" << endl;
	int n;
	while (cin >> n) {
		p->push_back(n);
		if (getchar() == '\n')
			break;
	}
}

void print(shared_ptr<vector<int>> p) {
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
	shared_ptr<vector<int>> p = func1();
	if (!p) {
		cerr << "�ڴ�ľ�" << endl;
	}
	read(p);
	print(p);

	return 0;
}
