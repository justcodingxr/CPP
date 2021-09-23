/*58.bind函数实现在vector<int>中找第一个大于给定string的长度的值
2021-09-18 21:36
*/
#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//比较函数
bool func(int m, string &s) {
	return m > s.size();
}

void findvalue(vector<int> &v1, string &s) {
	auto it = find_if(v1.begin(), v1.end(), bind(func, std::placeholders::_1, s));
	cout << *it << endl;

}

int main() {
	cout << "输入一串整数：" << endl;
	int k;
	vector<int> v1;
	while (cin >> k) {
		v1.push_back(k);
		if (getchar() == '\n')
			break;
	}
	cout << "输入字符串：" << endl;
	string s;
	cin >> s;

	findvalue(v1, s);

	return 0;
}
