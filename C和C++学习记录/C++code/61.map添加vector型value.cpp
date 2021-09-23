/*61.map添加vector型value*/
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

void addfamily(map<string, vector<string>> &mp1, const string &s) {
	mp1[s];//map有默认初始化构造函数，如果不存在会加入，否则不会做什么
}

void addchild(map<string, vector<string>> &mp1, const string &s, const string &str) {
	mp1[s].push_back(str);	//下标运算得到vector容器
}

int main() {
	map<string, vector<string>>  mp1;
	addfamily(mp1, "ling");
	addfamily(mp1, "zhang");
	addchild(mp1, "zhang", "z1");
	addchild(mp1, "ling", "l1");
	
	//it为pair
	for (auto it : mp1) {
		cout << "family:" << it.first << " ";
		
		//ik为vector中元素
		for (auto ik : it.second)
			cout << "child:" << ik;

		cout << endl;
	}

	return 0;
}
