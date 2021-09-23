/*40.范围赋值
2021-09-16 22:33
*/
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	vector<string> v1;
	list<char * > li = {"hello", "my", "brother"};

	//v1 = li;容器类型一样不能直接赋值
	v1.assign(li.begin(), li.end());
	cout << "v1:" << v1.capacity() << " " << v1.size()
	     << " " << v1[0] << " " << v1[v1.size() - 1] << endl;
	v1 = {"hhh", "lll"};
	cout << "v1[0]:" << *(v1.begin()) << endl;
//	swap(v1, list);容器类型不同无法交换，swap不改变指针，引用，迭代器绑定的元素；
	return 0;
}

