/*61.map���vector��value*/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

void addfamily(map<string, vector<string>> &mp1, const string &s) {
	mp1[s];//map��Ĭ�ϳ�ʼ�����캯������������ڻ���룬���򲻻���ʲô
}

void addchild(map<string, vector<string>> &mp1, const string &s, const string &str) {
	mp1[s].push_back(str);	//�±�����õ�vector����
}

int main() {
	map<string, vector<string>>  mp1;
	addfamily(mp1, "ling");
	addfamily(mp1, "zhang");
	addchild(mp1, "zhang", "z1");
	addchild(mp1, "ling", "l1");
	
	//itΪpair
	for (auto it : mp1) {
		cout << "family:" << it.first << " ";
		
		//ikΪvector��Ԫ��
		for (auto ik : it.second)
			cout << "child:" << ik;

		cout << endl;
	}

	return 0;
}
