/*54.partition���������ķֽ������
2021-09-18 15:58
*/

#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iostream>
using namespace std;
bool func(const string &s) {
	return s.size() >= 5;
}

int main() {
	vector<string> v1;
	cout << "�����ַ�����" << endl;
	string s;
	while (cin >> s) {
		v1.push_back(s);
		if (getchar() == '\n')
			break;
	}
	for (auto s : v1) {
		cout << s << " ";
	}
	cout << endl;

	cout << "���Ȳ�����5���ַ�����" << endl;
	auto it1 = partition(v1.begin(), v1.end(), func);
	for (auto it = v1.begin(); it != it1; it++) {
		cout << *it << " " << endl;
	}
	return 0;
}
