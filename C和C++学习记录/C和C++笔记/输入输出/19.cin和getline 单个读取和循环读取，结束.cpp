
/*
19.cin和getline 单个读取和循环读取，结束
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> v;
	string s;
	char c = 'y';


//	while (cin >> s) {
//		v.push_back(s);//遇到空格，此次>>结束
//
//		//避免输入永远无法止步
//		if (getchar() == '\n')//getchar()接收换行作为结束标志
//			break;
//	}



	while (getline(cin, s)) {
		v.push_back(s);
		//cin结束标记是空格,制表符。getline结束标enter。
		//cin和getline循环读取，都是到文件结尾或异常为止，除非主动结束
		//cin 用getchar()接收换行作为结束标志
		//因为直接enter换行getline会是空字符串，以此为结束
		if (*(v.end() - 1) == "" )
			break;
	}

	for (auto it = v.end() - 1; it != v.begin() - 1 ; it--) {
		cout << *it << endl;
	}
	return 0;
}
