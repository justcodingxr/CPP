/*12.������������������,���ظ����*/

#include <iostream>
using namespace std;


bool isZhishu(int a) ;
int main() {


	cout << "����������n:";
	int n;
	cin >> n;

	for (int i = 2; i < n ; i++) {
		if (n % i == 0) {
			if (isZhishu(i))
				cout << i << " ";
		}
	}
	cout << endl;


	return 0;
}

bool isZhishu(int a) {
	bool bl = true;
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			bl = false;
			break;
		}
	}

	return bl;
}