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
//����\n������˵��enter��������cin,cin����ӿո��Ʊ�enter��
//�������\n��getline(cin, str)������ӿո��Ʊ�getchar�������Խ���enter
	}
	cout << count << endl;
	cout << "=========" << endl;


	string s;
	while (cin >> s) {
		//cin����ӿո��Ʊ�enter��û��if (getchar() == '\n')��һֱѭ��
		cout << s;
		if (getchar() == '\n') {//getchar�������Խ���enter
			cout << endl << "=========" << endl;
			break;
		}
	}

	string str;
	while (getline(cin, str)) {
		//getline(cin, str)�������\n,�ո��Ʊ�
		cout << str;
		if (getchar() == '\n') {
			cout << endl << "=========" << endl;
			break;
		}

	}
	return 0;
}
