/*57.bind构建新对象实现函数取代lambda
2021-09-18 21:09
*/

#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <functional>
using namespace std;
//构建函数取代lambda
bool lesslen(const string &a, const string &b) {
	return a.size() > b.size();
}

bool lessm(const string &a, int m) {
	return a.size() < m;
}


void biggies(vector<string> &v1, vector<string>::size_type m) {
	//按字典序排序
	sort(v1.begin(), v1.end());
	cout << endl << "按字典序排序" << endl;
	for (auto s : v1) {
		cout << s << " ";
	}
	cout << endl;


	//unique重排erase删除重复元素
	v1.erase(unique(v1.begin(), v1.end()), v1.end());
	cout << endl << "unique重排erase删除重复元素" << endl;
	for (auto s : v1) {
		cout << s << " ";
	}
	cout << endl;



	//保持条件并按字典序排序
//	stable_sort(v1.begin(), v1.end(), [](const string &a, const string &b) {
//		return a.size() > b.size();
//	});


//定义函数来取代lambda调用的方法
//将本来lambda可以直接获取的元素的参数 和 外层函数的局部变量 与定义的函数
//通过bind绑定为一个新的 调用对象；用占位符代替 本来lambda可以直接获取的元素的参数
//bool lesslen(const string &a, const string &b) {
//	return a.size() > b.size();
//}
//	stable_sort(v1.begin(), v1.end(), bind(lesslen, std::placeholders::_1, std::placeholders::_2));
//std::placeholders::_1代替const string &a,std::placeholders::_2代替const string &b,局部变量直接写
	//保持条件并按字典序排序
	stable_sort(v1.begin(), v1.end(), bind(lesslen, std::placeholders::_1, std::placeholders::_2));
	cout << endl << "保持大小条件并按字典序排序" << endl;
	for (auto s : v1) {
		cout << s << " ";
	}
	cout << endl;


//
//	//找出第一个小于3的元素，返回迭代器
//	auto it = find_if(v1.begin(), v1.end(), [m](const string &s) {
//		return s.size() < m;
//	}  );
//	cout << endl;

	//找出第一个小于3的元素，返回迭代器
	auto it = find_if(v1.begin(), v1.end(), bind(lessm, std::placeholders::_1, m) );
	cout << endl;


	//输出一共有多少个这样的元素
	cout << v1.end() - it << endl;
}



int main() {
	vector<string> v1;//容器对象传递给容器引用
	cout << "输入字符串：" << endl;
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

	vector<string>::size_type m = 3;
	biggies(v1, m);
	return 0;
}
