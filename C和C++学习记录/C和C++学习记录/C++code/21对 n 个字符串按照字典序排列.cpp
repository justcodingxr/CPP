/*21.题目描述
给定 n 个字符串，请对 n 个字符串按照字典序排列。
输入描述:
输入第一行为一个正整数 n(1≤n≤1000),下面 n 行为 n 个字符串(字符串长度≤100),字符串中只含有大小写字母。
输出描述:
数据输出 n 行，输出结果为按照字典序排列的字符串。*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //引用 sort 函数需添加的头文件。sort默认字典序
using namespace std;
int main() {
	int n;
	cout << "输入n；";
	cout << "输入n个·单词；";
	while (cin >> n) {
		/*将多行输入的字符串依次放入到向量 vs 中*/
		string str;
		vector<string> vs; //定义向量 vs
		while (n--) { //多次输入，除了 for 循环的另一种循环操作
			cin >> str;
			vs.push_back(str); //将字符串 str 放入到向量 vs 中
		}
		/*对向量 vs 中的字符串进行升序排列*/
		sort(vs.begin(), vs.end());
		//将向量 vs 的元素升序排列，因为 vs 的元素是英文单词，sort 函数默认的升序就是字典序
		/*将向量 vs 中的元素正序输出*/
		cout << "========" << endl;
		vector<string>::iterator vit; //第一步先定义一个向量迭代器 vit
		for (vit = vs.begin(); vit != vs.end(); vit++)
			cout << *vit << endl;
	}
	return 0;
}






//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
////比较两个字符串大小；可以直接用s1>s2判断
//bool cmp(string &s1, string &s2) {
//	bool bl = true;
//	int i = 0;
//	while (i <= s1.size() && i <= s2.size()) {
//		if (s1[i] >= s2[i] ) {
//			bl = false;
//			break;
//		}
//		i++;
//	}
//	return bl;
//
//}
//
//int main() {
//
//	int n;
//	cout << "输入n：" << endl;
//	cin >> n;
//	string s;
//	vector<string> v;
//	cout << "输入单词：" << endl;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		v.push_back(s);
//	}
//	cout << "========" << endl;
//	for (auto it = v.begin(); it < v.end(); it++) {
//		for ( auto jt = v.begin(); jt < v.end() - 1; jt++) {
//			if (cmp(*jt, *(jt + 1))) {
//				string s;
//				//*it表示容器元素，且对*it操作会真实改变容器元素
//				//*p表示地址的值，不可以。。
//				s = *(jt + 1);
//				*(jt + 1 ) = *jt;
//				*jt = s;
//			}
//
//		}
//	}
//	cout << "========" << endl;
//
//	for (auto &s : v) {
//		cout << s << endl;
//	}
//
//	return 0;
//}
