/*59.���������*/
#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>
#include <iostream>
#include <list>
using namespace std;

int main() {
	//�����ҵ�һ��0
	list<int> li = {12, 2, 32, 12, 23, 26, 35, 0, 14, 78, 3, 0, 21, 36, 14, 0, 14, 45};
	cout << "list1:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}
	auto it = find(li.rbegin(), li.rend(), 0);
	cout << endl << *it  << endl;//list������������������

	//�������3~7��list
	list<int> li2;
	vector<int> v2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto itr1 = v2.rbegin() + 2;
	auto itr2 = v2.rend() - 3;
	li2.insert(li2.begin(), itr1, itr2);
	for (auto s : li2) {
		cout << s << " ";
	}

	cout << endl << "�����ַ�����" << endl;
	string s;
	vector<string> v1;
	while (cin >> s) {
		v1.push_back(s);
		if (getchar() == '\n')
			break;
	}



	cout << endl << "��������������ӡ:" << endl;
	for (auto it = v1.rbegin(); it != v1.rend(); it++) {
		cout << *it << " ";
	}



	cout << endl << "��ͨ�����������ӡ:" << endl;
	for (auto it = v1.end(); it != v1.begin() - 1; it--) {
		cout << *it << " ";
	}

	return 0;
}
