/*49.count�㷨*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main() {
	cout << "����������" << endl;
	int k;
	vector<int> v1;
	while (1) {
		cin >> k;
		v1.push_back(k);
		cout << "�Ƿ������y" << endl;
		char ch;
		cin >> ch;
		if (ch != 'y')
			break;
		else
			cout << endl << "����������" << endl;
	}
	cout << "��������:" << endl;
	for (auto s : v1) {
		cout << s << " ";
	}
	cout << endl;

	cout << "�����ƥ��������" << endl;
	while (1) {
		int j;
		cin >> j;
		int n = count(v1.begin(), v1.end(), j);
		cout << "����ƥ������" << n << endl;
		cout << "�Ƿ������y" << endl;
		char ch;
		cin >> ch;
		if (ch != 'y')
			break;
		else
			cout << "����������" << endl;
	}

	list<string> li;
	string s;
	auto it1 = li.begin();
	cout << "����һЩ�ַ�����" << endl;
	while (cin >> s) {
		it1 = li.insert(it1, s);
		if (getchar() == '\n')
			break;
	}
	
	cout << "����ƥ���ַ�����" << endl;
	while (1) {
		string str;
		cin >> str;
		int m = count(li.begin(), li.end(), str);
		cout << "�ַ���ƥ������" << m << endl;
		cout << "�Ƿ������y" << endl;
		char ch;
		cin >> ch;
		if (ch != 'y')
			break;
		else
			cout << "�����ַ�����" << endl;
	}

	return 0;
}
