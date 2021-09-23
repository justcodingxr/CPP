/*18.句子单词逆序输出
题目描述
将一个英文语句以单词为单位逆序排放。例如“I am a boy”，
逆序排放后为“boy a am I”
所有单词之间用一个空格隔开，语句中除了英文字母外，
不再包含其他字符（初级标志）
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//vector容器实现
int main() {
	vector<string> v;
	string s;
	char c = 'y';
	//cin结束标记是空格。getline结束标记换行。
	//cin和getline循环读取，都是到文件结尾或异常为止，除非主动结束

	while (cin >> s) {
		v.push_back(s);//遇到空格，此次>>结束

		//避免输入永远无法止步
		if (getchar() == '\n')//getchar()接收cin忽视的换行enter作为结束标志
			break;
	}

	for (auto it = v.end() - 1; it != v.begin() - 1 ; it--) {
		cout << *it << " ";
	}
	return 0;
}


