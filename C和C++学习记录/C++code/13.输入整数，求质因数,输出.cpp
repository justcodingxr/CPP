/*13.输入整数，求质因数,输出*/
#include <iostream>
using namespace std;

int main() {
	int i = 2, k;
	cout << "输入整数k:" << endl;
	cin >> k;

	while (1 < k) {
		if (k % i == 0) {
			cout << i << " ";
			k = k / i;
		} else {
			i++;
		}

	}

	return 0;
}
