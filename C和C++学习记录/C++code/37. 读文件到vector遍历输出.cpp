/*37. 读文件到vector，每个元素是一行，遍历vector输出
2021-09-16 18:09
*/
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	vector<string> v1;

	fstream fis("data.txt");//打开成功返回0
	if (!fis) {
		cerr << "打开文件错误" << endl;
		return -1;
	}

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

