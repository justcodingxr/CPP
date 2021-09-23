/*65.插入迭代器front_inserter,back_inserter,inserter
*/
#include <iostream>
using namespace std;

#include <iterator>
#include <list>
#include <iostream>

using namespace std;
//insert和插入迭代器，insert是一个容器函数，
//插入迭代器front_inserter,back_inserter,inserter用于构造迭代器
//front_inserter,back_inserter参数是一个容器名字,返回的是容器最新元素的迭代器
//inserter可以有两个参数，第二个指出插入迭代器的位置，不会跟新
void listprint(list<int> lst) {
	if (lst.empty())
		return;
	while (!lst.empty()) {
		cout << lst.front() << " ";
		lst.pop_front();
	}
	cout << endl;
}

int main() {
	list<int> lst = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> lst2 = { 10 }, lst3 = { 10 }, lst4 = { 10 };

	copy(lst.cbegin(), lst.cend(), back_inserter(lst2));
	//lst2包含10,1,2,3,4,5,6,7,8,9
	listprint(lst2);

	copy(lst.cbegin(), lst.cend(), inserter(lst3, lst3.begin()));
	//lst3包含1,2,3,4,5,6,7,8,9,10
	listprint(lst3);

	copy(lst.cbegin(), lst.cend(), front_inserter(lst4));
	//lst4包含9,8,7,6,5,4,3,2,1,10
	listprint(lst4);
	return 0;
}