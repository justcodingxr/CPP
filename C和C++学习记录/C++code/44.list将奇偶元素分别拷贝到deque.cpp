/*44.list����żԪ�طֱ𿽱���deque*/
#include <iostream>
#include <deque>
#include <list>
using namespace std;

int main() {
	list<int> li = {23, 5, 54, 6, 24, 55, 12, 32, 33, 15, 16, 18, 14, 3, 11, 24};
	deque<int> d1;
	deque<int> d2;

	cout << "��������li��" << endl;
	for (auto str : li) {
		cout << str << endl;
	}

	for (auto n : li) {
		if (n % 2 == 0)
			d1.push_back(n);
		else
			d2.push_back(n);
	}

	cout << "��������d1��" << endl;
	for (auto str : d1) {
		cout << str << endl;
	}

	cout << "��������d1��" << endl;

	for (auto str : d2) {
		cout << str << endl;
	}

	return 0;
}