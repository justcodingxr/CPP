/*55.����lambdaȡ��ν�����÷����㷨
2021-09-18 15:58
*/

#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iostream>
using namespace std;
int main() {
	vector<string> v1;
	cout << "�����ַ�����" << endl;
	string s;
	while (cin >> s) {
		v1.push_back(s);
		if (getchar() == '\n')
			break;
	}
	for (auto s : v1) {
		cout << s << " ";
	}
	cout << endl;

	cout << "���Ȳ�����5���ַ�����" << endl;
	//���뷶Χ��Ԫ�ػᴫ��const string &s�βΣ�
	//���ú������ô��Σ�����lambda����Ԫ�ػ��Զ�����
	auto it1 = partition(v1.begin(), v1.end(),
	[](const string &s) {
		return s.size() >= 5;
	}  );
	for (auto it = v1.begin(); it != it1; it++) {
		cout << *it << " " << endl;
	}

	cout << "for_each����lambda����:" << endl;
	for_each(v1.begin(), v1.end(),
	[](const string &s) {
		cout << s << " ";
	}	);

//	cout << "for_each���ú�������:" << endl;
//	for_each(v1.begin(), v1.end(), printm(const & s) {
//		cout << s << " "
//	};
//���ú������ô��Σ�����lambda����Ԫ�ػ��Զ�����
	return 0;
}
