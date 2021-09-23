/*38. 读文件到vector，每个元素是一行，遍历vector输出
命令行传参数
2021-09-16 18:09
*/
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cerr << "输入程序和文件名不正确" << endl;
		return -1;
	}

	fstream fis(argv[1]);//打开成功返回0
	if (!fis) {
		cerr << "打开文件错误" << endl;
		return -1;
	}

	vector<string> v1;
	string s;
	while (getline(fis, s)) {
		v1.push_back(s);
	}
	cout << "读取完成" << endl;

	for (auto s : v1) {
		cout << s;
	}

	return 0;
}