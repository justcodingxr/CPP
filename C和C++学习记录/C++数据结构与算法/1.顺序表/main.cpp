#include <iostream>
#include "b.h"
#include <iostream>
using namespace std;

int main() {

	LinearList<int> List(10);//LinearList<int>模板类

	List.insert(1, 100);
	List.insert(2, 200);
	List.insert(3, 300);
	List.insert(4, 400);
	cout << "当前表长度：" << List.getLength() << endl;
	cout << "当前元素：" << List;//类外重载运算符<<
	int m;
	if (List.getData(3, m)) {
		cout << "第三个元素：" << m << endl;
	}
	int x = 200;
	cout << "元素200在表中位置：" << List.find(x) << endl;

	//将200改为250
	List.modifyData(List.find(x), 250);
	if (List.getData(2, x)) {
		cout << "第二个元素：" << x << endl;
	}
	return 0;
}
