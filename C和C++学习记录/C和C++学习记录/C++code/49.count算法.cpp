/*49.count算法*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main() {
	cout << "输入整数：" << endl;
	int k;
	vector<int> v1;
	while (1) {
		cin >> k;
		v1.push_back(k);
		cout << "是否继续？y" << endl;
		char ch;
		cin >> ch;
		if (ch != 'y')
			break;
		else
			cout << endl << "输入整数：" << endl;
	}
	cout << "整数序列:" << endl;
	for (auto s : v1) {
		cout << s << " ";
	}
	cout << endl;

	cout << "输入待匹配整数：" << endl;
	while (1) {
		int j;
		cin >> j;
		int n = count(v1.begin(), v1.end(), j);
		cout << "整数匹配结果：" << n << endl;
		cout << "是否继续？y" << endl;
		char ch;
		cin >> ch;
		if (ch != 'y')
			break;
		else
			cout << "输入整数：" << endl;
	}

	list<string> li;
	string s;
	auto it1 = li.begin();
	cout << "输入一些字符串：" << endl;
	while (cin >> s) {
		it1 = li.insert(it1, s);
		if (getchar() == '\n')
			break;
	}
	
	cout << "输入匹配字符串：" << endl;
	while (1) {
		string str;
		cin >> str;
		int m = count(li.begin(), li.end(), str);
		cout << "字符串匹配结果：" << m << endl;
		cout << "是否继续？y" << endl;
		char ch;
		cin >> ch;
		if (ch != 'y')
			break;
		else
			cout << "输入字符串：" << endl;
	}

	return 0;
}
