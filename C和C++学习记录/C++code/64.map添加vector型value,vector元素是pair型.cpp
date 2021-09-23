/*64.map添加vector型value,vector元素是pair型*/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

void addfamily(map<string, vector<pair<string,string> > > &mp1, const string &s) {
	mp1[s];//map有默认初始化构造函数，如果不存在会加入，否则不会做什么
}

void addchild(map< string, vector<pair<string, string>>> &mp1, const string &s, const string &str1,const string &str2) {
	mp1[s].push_back({str1, str2});	//下标运算得到vector容器
	                }

int main() {
		map < string, vector<pair<string, string>>>  mp1;
		addfamily(mp1, "ling");
		addfamily(mp1, "zhang");
		addchild(mp1, "zhang", "z1", "虎");
		addchild(mp1, "ling", "l1", "羊");

		//it为pair
		for (auto it : mp1) {
			cout << "family:" << it.first << " ";

			//ik为vector中元素
			for (auto ik : it.second)
				cout << "child:" << ik.first << " 属" << ik.second;

			cout << endl;
		}

		return 0;
	}