/*60.map����������������,string�����С�ͱ�㣬setȥ��*/
#include <iostream>
#include <map>
#include <set>
using namespace std;

string &func(string &s) { //�����ַ��������Ӵ�Сд��ĩβ���
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
	cout << "�����ַ���:" << endl;
	while (cin >> s) {
		s = func(s);
		if (st1.find(s) == st1.end())
			mp1[s]++;//ֱ�Ӿ���key�ˣ�����������Ĭ�Ϲ��캯��
		if (getchar() == '\n')
			break;
	}
	for (auto s : mp1) {
		cout << s.first << " occur " << s.second << (s.second > 1 ? " times" : " time") << endl;
	}
	return 0;
}
