/*37. ���ļ���vector��ÿ��Ԫ����һ�У�����vector���
2021-09-16 18:09
*/
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	vector<string> v1;

	fstream fis("data.txt");//�򿪳ɹ�����0
	if (!fis) {
		cerr << "���ļ�����" << endl;
		return -1;
	}

	string s;
	while (getline(fis, s)) {
		v1.push_back(s);
	}
	cout << "��ȡ���" << endl;

	for (auto s : v1) {
		cout << s;
	}

	return 0;
}

