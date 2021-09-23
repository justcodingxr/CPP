/*53.重排容器元素算法sort-unique-erase*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
using namespace std;

//定制条件
bool compare(string &a, string &b) {
	return a < b; //升序排列，如果改为return a>b，则为降序
}

bool samelen(const string &a, const string &b) {
	bool bl = false;
	if (a.size() < b.size())
		bl = true;
	return bl;
}

int main() {

	vector<string> li;
	string s;
	auto it1 = li.begin();
	cout << "输入一些字符串：" << endl;
	while (cin >> s) {
		it1 = li.insert(it1, s);
		if (getchar() == '\n')
			break;
	}

	cout << "字符串序列:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}
	cout << endl << endl;



	//sort重排
	sort(li.begin(), li.end(), compare); //campare可以作为第三个参数
	cout << "sort字符串序列:" << endl;
	for (auto it = li.begin(); it != li.end(); it++) {
		cout << *it << " ";
	}
	cout << endl << endl;



	//unique
	auto it = unique(li.begin(), li.end());
	cout << "范围for输出unique字符串序列:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}
	cout << endl << endl;
	//为什么和以往的for会有区别？
	//因为unique并没有正真删除重复的元素，只是将尾迭代器指向不重复元素的后面，
	//这其实是有元素的，但是形式上无法打印，会继续打印后面，和end()这种迭代器不一样
	cout << "for输出unique字符串序列:" << endl;
	for (auto it1 = li.begin(); it1 != li.end(); it1++) {
		cout << *it1 << " ";
	}
	cout << endl << endl;




	//erase删除后面重复的元素，包括形式上不能打印的
	li.erase(it, li.end());//it是unique返回的”尾”后迭代器
	cout << "erase后for输出字符串序列:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}
	cout << endl << endl;


	//保持某个条件的前提，再按字典排序；
	stable_sort(li.begin(), li.end(), samelen);
	cout << "stable_sort后for输出字符串序列:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}
	cout << endl << endl;
	return 0;
}