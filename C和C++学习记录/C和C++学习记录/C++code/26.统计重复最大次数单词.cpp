/*26输入字符串，统计连续重复次数最大的，输出单词和重复次数*/
#include <iostream>
using namespace std;

int main() {
	string currentStr;
	string maxStr;
	int max = 0;
	int count = 0;
	string preStr;

	cout << "输入字符串：" << endl;
	while (cin >> currentStr) {
		if (currentStr == preStr) {
			count++;
		} else {
			count = 0;//重新计数
		}

		if (count > max) {
			max = count;
			maxStr = currentStr;
		}

		preStr = currentStr;

		if (getchar() == '\n')
			break;
	}

	cout << "maxStr:" << maxStr << endl;
	cout << "max:" << max << endl;

	return 0;
}
