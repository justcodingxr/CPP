/*55.调用lambda取代谓词来用泛型算法
2021-09-18 15:58
*/

#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iostream>
using namespace std;
int main() {
	vector<string> v1;
	cout << "输入字符串：" << endl;
	string s;
	while (cin >> s) {
		v1.push_back(s);
		if (getchar() == '\n')
			break;
	}
	for (auto s : v1) {
		cout << s << " ";
	}
	cout << endl;

	cout << "长度不少于5的字符串：" << endl;
	//输入范围的元素会传入const string &s形参，
	//调用函数不好传参，对于lambda对象，元素会自动传入
	auto it1 = partition(v1.begin(), v1.end(),
	[](const string &s) {
		return s.size() >= 5;
	}  );
	for (auto it = v1.begin(); it != it1; it++) {
		cout << *it << " " << endl;
	}

	cout << "for_each调用lambda对象:" << endl;
	for_each(v1.begin(), v1.end(),
	[](const string &s) {
		cout << s << " ";
	}	);

//	cout << "for_each调用函数对象:" << endl;
//	for_each(v1.begin(), v1.end(), printm(const & s) {
//		cout << s << " "
//	};
//调用函数不好传参，对于lambda对象，元素会自动传入
	return 0;
}
