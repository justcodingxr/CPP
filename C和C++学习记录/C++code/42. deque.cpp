/*42. deque*/
#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<string> d1;
	string s;

	cout << "�����ַ���ǰ�壺" << endl;
	while (cin >> s) {
		d1.push_front(s);

		if (getchar() == '\n')
			break;
	}
	cout << "�ٴ������ַ�����壺" << endl;

	while (cin >> s) {
		d1.push_back(s);

		if (getchar() == '\n')
			break;
	}
	cout << "����������" << endl;

	for (auto str : d1) {
		cout << str << endl;
	}
	return 0;
}
