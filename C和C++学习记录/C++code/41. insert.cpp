/*41. insert*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> v1;
	v1.insert(v1.begin(), "hello");
	v1.insert(v1.begin(), "lll");
	v1.insert(v1.end(), "xxx");
	for (auto s : v1) {
		cout << s << endl;
	}
	cout << "===" << endl;

	v1.insert(v1.begin() + 1, 2, "aa");
	v1.insert(v1.end() - 1, 2, "zz");
	for (auto s : v1) {
		cout << s << endl;
	}
	cout << "===" << endl;

	vector<string> v2 = {"pp", "mm", "nn "};
	v1.insert(v1.begin(), v2.begin(), v2.end());
	v1.insert(v1.end(), v2.begin(), v2.end());
	for (auto s : v1) {
		cout << s << endl;
	}
	cout << "===" << endl;
	cout << "v1 size():" << v1.size() << endl;
//insert返回指向第一个元素的迭代器
	cout << endl << "insert输入:" << endl;
	string word;
	auto it = v1.begin();
	int count = 0;
	while (cin >> word) {
		count++;
		it = v1.insert(it, word);
		if (getchar() == '\n')
			break;
	}
	cout << endl;
	for (auto s : v1) {
		cout << s << endl;
	}
	cout << "v1 size:" << v1.size() << endl;
	cout << "===" << endl;
	return 0;
}
