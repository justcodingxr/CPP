/*38. ���ļ���vector��ÿ��Ԫ����һ�У�����vector���
�����д�����
2021-09-16 18:09
*/
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cerr << "���������ļ�������ȷ" << endl;
		return -1;
	}

	fstream fis(argv[1]);//�򿪳ɹ�����0
	if (!fis) {
		cerr << "���ļ�����" << endl;
		return -1;
	}

	vector<string> v1;
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