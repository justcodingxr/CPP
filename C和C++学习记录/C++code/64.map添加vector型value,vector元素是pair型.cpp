/*64.map���vector��value,vectorԪ����pair��*/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void addfamily(map<string, vector<pair<string,string> > > &mp1, const string &s) {
	mp1[s];//map��Ĭ�ϳ�ʼ�����캯������������ڻ���룬���򲻻���ʲô
}

void addchild(map< string, vector<pair<string, string>>> &mp1, const string &s, const string &str1,const string &str2) {
	mp1[s].push_back({str1, str2});	//�±�����õ�vector����
	                }

int main() {
		map < string, vector<pair<string, string>>>  mp1;
		addfamily(mp1, "ling");
		addfamily(mp1, "zhang");
		addchild(mp1, "zhang", "z1", "��");
		addchild(mp1, "ling", "l1", "��");

		//itΪpair
		for (auto it : mp1) {
			cout << "family:" << it.first << " ";

			//ikΪvector��Ԫ��
			for (auto ik : it.second)
				cout << "child:" << ik.first << " ��" << ik.second;

			cout << endl;
		}

		return 0;
	}