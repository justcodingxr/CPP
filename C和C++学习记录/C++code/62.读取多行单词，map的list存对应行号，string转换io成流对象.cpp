/*62.读取多行单词，map的list存对应行号，string转换io成流对象*/
#include <iostream>
#include <list>
#include <map>
#include <sstream>

using namespace std;

int main() {
	map<string, list<int>> mp1;
	string s;
//	in=fistream("a.txt");
	int line = 0;
	cout << "输入多行字符串：" << endl;
	while (getline(cin, s)) {//句子，计数的是单词行号
		line++;
		if (s == "")//getline结束方法，与空string比较
			break;

		//string转换为io流对象,>>会自动分割为单词语
		istringstream l_in(s);
		string str;
		while (l_in >> str) {
			mp1[str].push_back(line);
		}

	}

	for (auto it : mp1) {
		cout << it.first << "  occur：";
		for (auto ik : it.second) {
			cout << ik << " ";
		}
		cout << "line" << endl;
	}
	return 0;
}
