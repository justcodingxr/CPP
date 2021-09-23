/*70.字符动态数组存入字符串和NULL0'\0'*/
#include <iostream>
using namespace std;

int main() {
//	char c;
//	int i = 0;
//	char *p = new char[20];
//	while (cin >> c) {
//		p[i] = c;
//		i++;
//		if (i >= 19) {
//			cout << "p上限" << endl;
//			break;
//		}
//	}
//	//p[19]  = 0;
//	//p[19]  = NULL;
//	p[19]  = '\0';
//	cout << "p:" << p << endl;

//不忽视空格
	char *p2 = new char[20];
	int i2 = 0;
	char c2;
	while (cin.get(c2)) {
		p2[i2] = c2;
		i2++;
		if (i2 >= 19) {
			cout << "p2上限" << endl;
			break;
		}
	}
	//p[19]  = 0;
	//p[19]  = NULL;
	p2[19]  = '\0';
	cout << "p2:" << p2 << endl;
	return 0;
}
