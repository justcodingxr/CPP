
/*05. 字符串最后一个单词的长度
题目描述
计算字符串最后一个单词的长度，单词以空格隔开。
输入描述:
一行字符串，非空，长度小于 5000。
输出描述:
整数 N，最后一个单词的长度。
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "请输入字符串：" << endl;
//	cin >> s;cin不能连续输入,用getline
	getline(cin, s);
	int n = 0;
	for (int i = s.size() - 1; i > -1; i--) {
		if (s[i] == ' ') {
			break;
		} else {
			n++;
		}

	}
	cout << n << endl;

	return 0;
}
