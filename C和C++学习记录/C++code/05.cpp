
/*05. �ַ������һ�����ʵĳ���
��Ŀ����
�����ַ������һ�����ʵĳ��ȣ������Կո������
��������:
һ���ַ������ǿգ�����С�� 5000��
�������:
���� N�����һ�����ʵĳ��ȡ�
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "�������ַ�����" << endl;
//	cin >> s;cin������������,��getline
	getline(cin, s);
	int n = 0;
	for (int i = s.size() - 1; i > -1; i--) {
		if (s[i] == ' ') {
			break;
		} else {
			n++;
		}

	}
	cout << n << endl;

	return 0;
}
