/*26�����ַ�����ͳ�������ظ��������ģ�������ʺ��ظ�����*/
#include <iostream>
using namespace std;

int main() {
	string currentStr;
	string maxStr;
	int max = 0;
	int count = 0;
	string preStr;

	cout << "�����ַ�����" << endl;
	while (cin >> currentStr) {
		if (currentStr == preStr) {
			count++;
		} else {
			count = 0;//���¼���
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
