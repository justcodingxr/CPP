/*09.�ַ����ָ�
��Ŀ����
?���������ַ������밴����Ϊ 8 ���ÿ���ַ�����������µ��ַ������飻
?���Ȳ��� 8 ���������ַ������ں��油���� 0�����ַ���������
��������:
���������ַ���(���� 2 ��,ÿ���ַ�������С�� 100)
�������:
���������Ϊ 8 �����ַ�������

ʾ�� 1
����
abc
123456789
���
abc00000
12345678
90000000*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s[2];

	for (int i = 0; i < 2; i++) {//���������ַ���
		getline(cin, s[i]);

	}

	for (int i = 0; i < 2; i++) {
		if (s[i].size() <= 8) {//С��8����0
			cout << s[i];
			for (int j = s[i].size() + 1; j < 9; j++)
				cout << 0;
			cout << endl;
		} else {
			for (int j = 0; j < 8; j++)//ǰ��8�������
				cout << s[i][j];
			cout << endl;

			for (int j = 8; j < s[i].size(); j++)
				cout << s[i][j];
			for (int j = s[i].size() ; j < 16; j++)
				cout << 0;
			cout << endl;

		}
	}
	return 0;
}



