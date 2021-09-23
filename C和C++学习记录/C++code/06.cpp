/*06.计算字符个数
题目描述
写出一个程序，接受一个有字母和数字以及空格组成的字符串，
和一个字符，然后输出输入字符串中含有该字符的个数。不区
分大小写。
输入描述:
输入一个有字母和数字以及空格组成的字符串，和一个字符。
输出描述:
输出输入字符串中含有该字符的个数。*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "输入一个字符串，含有各种字母空格数字：" << endl;
	getline(cin, s);
	char c[2];
	char *p;
	cout << "输入字符到p：" << endl;
	cin >> p;
	cout << "输出p：" << endl;
	cout << *p << endl;


	cout << "输入查找的字符：" << endl;
	cin >> c;
	int count = 0;
	for (int i = s.size() - 1; i > -1; i--) {
		if (s[i] == c[0])
			count++;
	}

	cout << "N=" << count << endl;
	return 0;
}
