/*67.使用内置指针和vetctor动态内存调用读写函数读取和打印整数*/
#include <new>
#include <vector>
#include <iostream>
using namespace std;

vector<int> *func1() {
	return new (nothrow) vector<int>;//类似new int；
}

void read(vector<int> *p) {
	cout << "输入若干整数：" << endl;
	int n;
	while (cin >> n) {
		p->push_back(n);
		if (getchar() == '\n')
			break;
	}
}

void print(vector<int> *p) {
	cout << "输出整数：" << endl;
	for (auto it = p->begin(); it != p->end(); it++) {
		cout << *it << " ";
	}
	cout << endl << "范围for循环输出：" << endl;
	//范围for循环可以遍历指针解引用，p是指向整个动态内存，解引用得动态内存对象
	for (auto it : *p) {//&无所谓，不需要修改元素
		cout << it << " ";
	}
}

int main() {
	vector<int> *p = func1();
	if (!p) {
		cerr << "内存耗尽" << endl;
	}
	read(p);
	print(p);
	delete p;
	p = nullptr;

	return 0;
}
