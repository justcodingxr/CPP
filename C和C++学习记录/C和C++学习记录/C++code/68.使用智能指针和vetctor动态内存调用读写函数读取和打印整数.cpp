/*68.使用智能指针和vetctor动态内存调用读写函数读取和打印整数*/
#include <new>
#include <vector>
#include <iostream>
#include <memory>
using namespace std;

shared_ptr<vector<int>> func1() {
	return make_shared<vector<int>>();//make_shared<vector<int>>()是函数，（）不要少

}

void read(shared_ptr<vector<int>> p) {
	cout << "输入若干整数：" << endl;
	int n;
	while (cin >> n) {
		p->push_back(n);
		if (getchar() == '\n')
			break;
	}
}

void print(shared_ptr<vector<int>> p) {
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
	shared_ptr<vector<int>> p = func1();
	if (!p) {
		cerr << "内存耗尽" << endl;
	}
	read(p);
	print(p);

	return 0;
}
