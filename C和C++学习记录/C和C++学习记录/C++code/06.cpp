/*06.�����ַ�����
��Ŀ����
д��һ�����򣬽���һ������ĸ�������Լ��ո���ɵ��ַ�����
��һ���ַ���Ȼ����������ַ����к��и��ַ��ĸ���������
�ִ�Сд��
��������:
����һ������ĸ�������Լ��ո���ɵ��ַ�������һ���ַ���
�������:
��������ַ����к��и��ַ��ĸ�����*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "����һ���ַ��������и�����ĸ�ո����֣�" << endl;
	getline(cin, s);
	char c[2];
	char *p;
	cout << "�����ַ���p��" << endl;
	cin >> p;
	cout << "���p��" << endl;
	cout << *p << endl;


	cout << "������ҵ��ַ���" << endl;
	cin >> c;
	int count = 0;
	for (int i = s.size() - 1; i > -1; i--) {
		if (s[i] == c[0])
			count++;
	}

	cout << "N=" << count << endl;
	return 0;
}
