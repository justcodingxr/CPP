#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

	int n;
	cout << "����n��" << endl;
	cin >> n;
	string s;
	vector<string> v;
	cout << "���뵥�ʣ�" << endl;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back(s);
	}

	cout << "========" << endl;
	auto jt = v.begin();
	string str;

	//*it��ʾ����Ԫ�أ��Ҷ�*it��������ʵ�ı�����Ԫ��
	//*p��ʾ��ַ��ֵ�������ԡ���
	str = *(jt + 1);
	*(jt + 1 ) = *jt;
	*jt = str;


	cout << "========" << endl;

	for (auto &s : v) {
		cout << s << endl;
	}

	return 0;
}