/*39. 读文件到vector，每个元素是一行，遍历vector输出
写到文件
命令行传参数
2021-09-16 18:09
*/
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 3) {
		cerr << "输入程序和文件名不正确" << endl;
		return -1;
	}

	ifstream fis(argv[1]);//打开成功返回0
	ofstream fos(argv[2]);//打开成功返回0
	if (!fis) {
		cerr << "打开文件1错误" << endl;
		return -1;
	}

	if (!fis) {
		cerr << "打开文件2错误" << endl;
		return -1;
	}

	vector<string> v1;
	string s;
	while (getline(fis, s)) {
		v1.push_back(s);
		fos << s;//写，也是分步的
	}
	cout << " ok" << endl;

	for (auto s : v1) {
		cout << s << endl;
	}



	return 0;
}
