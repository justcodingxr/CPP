/*63.����string��int�������pair����vector
2021-09-19 17:05
*/
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

//����pair�ĺ���
pair<string, int> func(string &s, int n) {
	return {s, n};
}

int main() {
	vector <pair<string, int> > v1;
	string s;
	int n;
	while (1) {
		//��ȡstring��n
		cout << "����string��" << endl;
		cin >> s;
		cout << endl << "��������n��" << endl;
		cin >> n;
		cout << "������y" << endl;
		char ch;
		cin >> ch;

		//����pair����vector
		v1.push_back(func(s, n));//�򻯷� push_back({s,n});
								//�򻯷�����push_back(make_pair(s,n));

		//����
		if (ch != 'y')
			break;
		else
			continue;
	}

	//��ӡvector
	for (auto it : v1) {
//		cout << it << endl;//�ֲ���ӡ
		cout << it.first << " " << it.second << endl;
	}

	return 0;
}
