/*16.字符个数统计
题目描述
编写一个函数，计算字符串中含有的不同字符的个数。字符在 ACSII 码范围内(0~127)。不在范围内的不作统计。
输入描述:
输入 N 个字符，字符在 ACSII 码范围内。
输出描述:
输出范围在(0~127)字符的个数。*/
#include <iostream>
using namespace std;

int funca(string &s) {
	int a[128] = {0};//{0,0,0...0}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 0 && s[i] <= 127)//字符与数字比较用的是ASCII码
			a[s[i]]++;
	}

	for (int i = 0; i < 128; i++)
		cout << a[i] << " ";
	return 0;
}

int main() {
	string s;
	cout << "输入一个字符串:" << endl;
	getline(cin, s);
	funca(s);

	return 0;
}
