/*36. ������*/

#include <iostream>
#include <stdexcept>
using namespace std;

istream &func(istream &is) {
	cout << "�����ַ���" << endl;
	string s;
	while (is >> s && !is.eof()) {
		if (is.bad())
			cerr << "IO������" << endl;
		if (is.fail()) {
			cerr << "���ݴ��������ԣ�" << endl;
			continue;
		}
		cout << s ;//�������Ч�жϣ����ѭ�����룬�ո������
		//Ҳ�Ƿֲ��������ģ�ֻ��һ����ʾ�ڿ���̨�����������ƣ�

	}

	is.clear();
	return is;
}

int main() {
	func(cin);//cin����ӿո񣬿ո���cin�Ľ������

	string ss;
	while (cin >> ss)
		cout << ss << endl;
	return 0;
}
