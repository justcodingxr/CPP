#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

	int n;
	cout << "输入n：" << endl;
	cin >> n;
	string s;
	vector<string> v;
	cout << "输入单词：" << endl;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back(s);
	}

	cout << "========" << endl;
	auto jt = v.begin();
	string str;

	//*it表示容器元素，且对*it操作会真实改变容器元素
	//*p表示地址的值，不可以。。
	str = *(jt + 1);
	*(jt + 1 ) = *jt;
	*jt = str;


	cout << "========" << endl;

	for (auto &s : v) {
		cout << s << endl;
	}

	return 0;
}