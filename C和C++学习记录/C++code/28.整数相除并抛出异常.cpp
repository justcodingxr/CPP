/*28.整数相除并抛出异常*/
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	int a, b;
	cout << "输入整数a,b:" << endl;
	while (cin >> a >> b) {
		try {
			if (b == 0) {
				throw runtime_error("除数不可为0");
				cout << "a除以b接果：" << a / b << endl;
			}
		} catch (runtime_error e) {
			cout << e.what() << endl;
		}

		cout << "继续：y？" << endl;
		char c;
		cin >> c;

		if (c == 'y') {
			cout << "输入整数a,b:" << endl;
			continue;
		} else
			break;

	}

	return 0;
}
