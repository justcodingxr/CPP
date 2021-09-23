/*20--参考18.句子单词逆序输出
题目描述
将一个英文语句以单词为单位逆序排放。例如“I am a boy”，
逆序排放后为“boy a am I”
所有单词之间用一个空格隔开，语句中除了英文字母外，
不再包含其他字符（初级标志）
*/
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

//堆栈容器实现
int main() {
	//方法2-实现，显然特点类似堆栈；
	stack<string> v;//定义一个堆栈容器
	string s;
	cout << "输入英语：" << endl;
	while (cin >> s) {
		v.push(s);
		if (getchar() == '\n') {
			break;
		}
	}
	while (!v.empty()) {
		cout << v.top() << " "; //输出栈顶元素
		v.pop();//出栈
	}

	return 0;
}