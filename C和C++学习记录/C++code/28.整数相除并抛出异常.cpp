/*28.����������׳��쳣*/
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	int a, b;
	cout << "��������a,b:" << endl;
	while (cin >> a >> b) {
		try {
			if (b == 0) {
				throw runtime_error("��������Ϊ0");
				cout << "a����b�ӹ���" << a / b << endl;
			}
		} catch (runtime_error e) {
			cout << e.what() << endl;
		}

		cout << "������y��" << endl;
		char c;
		cin >> c;

		if (c == 'y') {
			cout << "��������a,b:" << endl;
			continue;
		} else
			break;

	}

	return 0;
}
