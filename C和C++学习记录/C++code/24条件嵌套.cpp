#include <iostream>
using namespace std;

int main() {
	string s;
	cout << "����ɼ���" << endl;
	int score;
	while (cin >> score && score >= 0 && score <= 100) {
		s = (score >= 90) ? "����"
		    : (score >= 80) ? "��"
		    : (score >= 70) ? "����"
		    : "������";
		cout << s << endl;
		cout << "����ɼ���" << endl;
	}
	cout << "�������" << endl;

	return 0;
}
