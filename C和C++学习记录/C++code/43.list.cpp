/*43.list*/
#include <iostream>
#include <deque>
#include <list>
using namespace std;

int main() {
	list<string> li;
	string s;

	cout << "ÊäÈë×Ö·û´®Ç°²å£º" << endl;
	while (cin >> s) {
		li.push_front(s);

		if (getchar() == '\n')
			break;
	}
	cout << "ÔÙ´ÎÊäÈë×Ö·û´®ºó²å£º" << endl;

	while (cin >> s) {
		li.push_back(s);

		if (getchar() == '\n')
			break;
	}
	cout << "±éÀúÈÝÆ÷£º" << endl;

	for (auto str : li) {
		cout << str << endl;
	}
	return 0;
}