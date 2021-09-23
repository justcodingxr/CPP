/*15.从右至左提取不重复的整数*/
#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "输入一个正整数：";
	cin >> a;
	while (a != 0) {
		int b = a % 10;
		cout << b;
		a = (int)(a / 10);
	}

	return 0;
}
