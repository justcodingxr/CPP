/*39. ���ļ���vector��ÿ��Ԫ����һ�У�����vector���
д���ļ�
�����д�����
2021-09-16 18:09
*/
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 3) {
		cerr << "���������ļ�������ȷ" << endl;
		return -1;
	}

	ifstream fis(argv[1]);//�򿪳ɹ�����0
	ofstream fos(argv[2]);//�򿪳ɹ�����0
	if (!fis) {
		cerr << "���ļ�1����" << endl;
		return -1;
	}

	if (!fis) {
		cerr << "���ļ�2����" << endl;
		return -1;
	}

	vector<string> v1;
	string s;
	while (getline(fis, s)) {
		v1.push_back(s);
		fos << s;//д��Ҳ�Ƿֲ���
	}
	cout << " ok" << endl;

	for (auto s : v1) {
		cout << s << endl;
	}



	return 0;
}
