/*60.map关联容器计数单词,string处理大小和标点，set去重*/
#include <iostream>
#include <map>
#include <set>
using namespace std;

string &func(string &s) { //处理字符串，忽视大小写和末尾标点
	for (int i = 0; i < s.size(); 	i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] -= 'A' - 'a';

		} else if (s[i] == ',' || s[i] == '.') {
			s.erase(i, 1); //
		}
	}
	return s;

}

int main() {
	map<string, int> mp1;
	set<string> st1 = {"a", "an", "An", "A", "and", "And", "but", "But", "or", "Or", "The", "the"};
	string s;
	cout << "输入字符串:" << endl;
	while (cin >> s) {
		s = func(s);
		if (st1.find(s) == st1.end())
			mp1[s]++;//直接就有key了？关联容器有默认构造函数
		if (getchar() == '\n')
			break;
	}
	for (auto s : mp1) {
		cout << s.first << " occur " << s.second << (s.second > 1 ? " times" : " time") << endl;
	}
	return 0;
}
