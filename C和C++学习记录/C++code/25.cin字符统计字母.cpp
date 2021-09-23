#include <iostream>
using namespace std;

int main() {
	char c;
	int count = 0;
	while (cin >> c) {

		if (c >= 'a' && c <= 'z')
			count++;
		else
			break;
//输入\n结束，说明enter不会输入cin,cin会忽视空格，制表，enter，
//不会忽视\n；getline(cin, str)不会忽视空格，制表；getchar（）可以接收enter
	}
	cout << count << endl;
	cout << "=========" << endl;


	string s;
	while (cin >> s) {
		//cin会忽视空格，制表，enter，没有if (getchar() == '\n')会一直循环
		cout << s;
		if (getchar() == '\n') {//getchar（）可以接收enter
			cout << endl << "=========" << endl;
			break;
		}
	}

	string str;
	while (getline(cin, str)) {
		//getline(cin, str)不会忽视\n,空格，制表；
		cout << str;
		if (getchar() == '\n') {
			cout << endl << "=========" << endl;
			break;
		}

	}
	return 0;
}
