/*42. deque*/
#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<string> d1;
	string s;

	cout << "ÊäÈë×Ö·û´®Ç°²å£º" << endl;
	while (cin >> s) {
		d1.push_front(s);

		if (getchar() == '\n')
			break;
	}
	cout << "ÔÙ´ÎÊäÈë×Ö·û´®ºó²å£º" << endl;

	while (cin >> s) {
		d1.push_back(s);

		if (getchar() == '\n')
			break;
	}
	cout << "±éÀúÈÝÆ÷£º" << endl;

	for (auto str : d1) {
		cout << str << endl;
	}
	return 0;
}
