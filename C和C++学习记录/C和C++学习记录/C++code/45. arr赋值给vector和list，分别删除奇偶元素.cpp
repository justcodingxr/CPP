/*45. arr赋值给vector和list，分别删除奇偶元素*/
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	int arr[] = {0, 1, 2, 3, 4, 5, 65, 7, 8, 9, 10, 11};
	vector<int> v1;


	int i = 0;
//	while (i < 12) {//单个元素依次赋值
//		v1.push_back(arr[i]);
//		i++;
//	}
//
//用assign替换更好，assign可用于不同但是相容的容器的元素替换
	v1.assign(arr, arr + 12);
	cout << "v1:" << endl;
	for (auto s : v1) {
		cout << s << " ";
	}


	list<int> li(v1.begin(), v1.end());//范围拷贝初始化，等效赋值了
	//是用于初始化，直接拷贝不行，要插入insert
	cout << endl << "li:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}

	auto it1 = li.begin();
	while ( it1 != li.end()) {
		//注意list迭代器不支持<运算符
		if (*it1 % 2 == 1)
			it1 = li.erase(it1); //会返回下一个位置迭代器,记得赋予it1
		else
			it1++;
	}
	cout << endl << "li2:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}


	auto it2 = v1.begin();
	while (it2 != v1.end()) {
		if (*it2 % 2 == 0)
			it2 = v1.erase(it2); //会返回下一个位置迭代器
		else
			it2++;
	}
	cout << endl << "v2:" << endl;
	for (auto s : v1) {
		cout << s << " ";
	}


	return 0;
}
