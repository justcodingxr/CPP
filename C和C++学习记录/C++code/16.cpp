/*16.�ַ�����ͳ��
��Ŀ����
��дһ�������������ַ����к��еĲ�ͬ�ַ��ĸ������ַ��� ACSII �뷶Χ��(0~127)�����ڷ�Χ�ڵĲ���ͳ�ơ�
��������:
���� N ���ַ����ַ��� ACSII �뷶Χ�ڡ�
�������:
�����Χ��(0~127)�ַ��ĸ�����*/
#include <iostream>
using namespace std;

int funca(string &s) {
	int a[128] = {0};//{0,0,0...0}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 0 && s[i] <= 127)//�ַ������ֱȽ��õ���ASCII��
			a[s[i]]++;
	}

	for (int i = 0; i < 128; i++)
		cout << a[i] << " ";
	return 0;
}

int main() {
	string s;
	cout << "����һ���ַ���:" << endl;
	getline(cin, s);
	funca(s);

	return 0;
}
