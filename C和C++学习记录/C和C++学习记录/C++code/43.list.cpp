/*43.list*/
#include <iostream>
#include <deque>
#include <list>
using namespace std;

int main() {
	list<string> li;
	string s;

	cout << "�����ַ���ǰ�壺" << endl;
	while (cin >> s) {
		li.push_front(s);

		if (getchar() == '\n')
			break;
	}
	cout << "�ٴ������ַ�����壺" << endl;

	while (cin >> s) {
		li.push_back(s);

		if (getchar() == '\n')
			break;
	}
	cout << "����������" << endl;

	for (auto str : li) {
		cout << str << endl;
	}
	return 0;
}