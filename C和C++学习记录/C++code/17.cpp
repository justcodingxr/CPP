/*17.字符串反转（逆序输出字符串）
题目描述
写出一个程序，接受多个单词，然后逆序输出各个单词。*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> v;
	string s;
	char c = 'y';
	while (cin >> s) {
		v.push_back(s);
		cout << "continue？ y/n" << endl;
		cin >> c;
		if (c != 'y') {
			break;
		} else {
			cout << "jixushuru：" << endl;
		}
	}
	for (auto it = v.begin(); it != v.end() ; it++) {
		cout << *it << " ";
	}
	cout << endl;

	for (auto it = v.end() - 1; it != v.begin() - 1 ; it--) {
		cout << *it << " ";
	}
	return 0;
}
