/*62.��ȡ���е��ʣ�map��list���Ӧ�кţ�stringת��io��������*/
#include <iostream>
#include <list>
#include <map>
#include <sstream>

using namespace std;

int main() {
	map<string, list<int>> mp1;
	string s;
//	in=fistream("a.txt");
	int line = 0;
	cout << "��������ַ�����" << endl;
	while (getline(cin, s)) {//���ӣ��������ǵ����к�
		line++;
		if (s == "")//getline�������������string�Ƚ�
			break;

		//stringת��Ϊio������,>>���Զ��ָ�Ϊ������
		istringstream l_in(s);
		string str;
		while (l_in >> str) {
			mp1[str].push_back(line);
		}

	}

	for (auto it : mp1) {
		cout << it.first << "  occur��";
		for (auto ik : it.second) {
			cout << ik << " ";
		}
		cout << "line" << endl;
	}
	return 0;
}
