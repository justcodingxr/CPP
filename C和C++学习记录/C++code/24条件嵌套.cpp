#include <iostream>
using namespace std;

int main() {
	string s;
	cout << "输入成绩：" << endl;
	int score;
	while (cin >> score && score >= 0 && score <= 100) {
		s = (score >= 90) ? "优秀"
		    : (score >= 80) ? "良"
		    : (score >= 70) ? "及格"
		    : "不及格";
		cout << s << endl;
		cout << "输入成绩：" << endl;
	}
	cout << "输入错误" << endl;

	return 0;
}
