/*09.字符串分隔
题目描述
?连续输入字符串，请按长度为 8 拆分每个字符串后输出到新的字符串数组；
?长度不是 8 整数倍的字符串请在后面补数字 0，空字符串不处理。
输入描述:
连续输入字符串(输入 2 次,每个字符串长度小于 100)
输出描述:
输出到长度为 8 的新字符串数组

示例 1
输入
abc
123456789
输出
abc00000
12345678
90000000*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s[2];

	for (int i = 0; i < 2; i++) {//输入两个字符串
		getline(cin, s[i]);

	}

	for (int i = 0; i < 2; i++) {
		if (s[i].size() <= 8) {//小于8，补0
			cout << s[i];
			for (int j = s[i].size() + 1; j < 9; j++)
				cout << 0;
			cout << endl;
		} else {
			for (int j = 0; j < 8; j++)//前面8个先输出
				cout << s[i][j];
			cout << endl;

			for (int j = 8; j < s[i].size(); j++)
				cout << s[i][j];
			for (int j = s[i].size() ; j < 16; j++)
				cout << 0;
			cout << endl;

		}
	}
	return 0;
}



