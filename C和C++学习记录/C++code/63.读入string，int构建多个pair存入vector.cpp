/*63.读入string，int构建多个pair存入vector
2021-09-19 17:05
*/
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

//创建pair的函数
pair<string, int> func(string &s, int n) {
	return {s, n};
}

int main() {
	vector <pair<string, int> > v1;
	string s;
	int n;
	while (1) {
		//读取string，n
		cout << "输入string：" << endl;
		cin >> s;
		cout << endl << "输入整数n：" << endl;
		cin >> n;
		cout << "继续？y" << endl;
		char ch;
		cin >> ch;

		//构建pair存入vector
		v1.push_back(func(s, n));//简化法 push_back({s,n});
								//简化法二，push_back(make_pair(s,n));

		//交互
		if (ch != 'y')
			break;
		else
			continue;
	}

	//打印vector
	for (auto it : v1) {
//		cout << it << endl;//分步打印
		cout << it.first << " " << it.second << endl;
	}

	return 0;
}
