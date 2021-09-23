/*36. 输入流*/

#include <iostream>
#include <stdexcept>
using namespace std;

istream &func(istream &is) {
	cout << "输入字符：" << endl;
	string s;
	while (is >> s && !is.eof()) {
		if (is.bad())
			cerr << "IO流错误" << endl;
		if (is.fail()) {
			cerr << "数据错误，请重试：" << endl;
			continue;
		}
		cout << s ;//多次流有效判断，多次循环输入，空格结束；
		//也是分步多次输出的，只是一次显示在控制台；输出缓冲机制；

	}

	is.clear();
	return is;
}

int main() {
	func(cin);//cin会忽视空格，空格是cin的结束标记

	string ss;
	while (cin >> ss)
		cout << ss << endl;
	return 0;
}
