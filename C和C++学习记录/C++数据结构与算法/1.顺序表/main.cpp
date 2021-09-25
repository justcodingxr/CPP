#include <iostream>
#include "LinearList.h"
#include "node.h"
#include <string>
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

//============================
	LinearList<Node> listnode(10);
	int grade[3] = { 86, 75, 93 };
	int grade2[3] = { 65, 75, 56 };
	int grade3[3] = { 99, 45, 76 };
	Node node1("lilei", "001", grade);
	Node node2("zhang", "002", grade2);
	Node node3("wang", "003", grade3);
	listnode.insert(1, node1);
	listnode.insert(2,node2 );
	listnode.insert(3, node3);

	cout << listnode;//<<LinearList会输出元素，元素是node
	//等价于<<各个node，调用ostream& operator<<(ostream& os, Node& node)
	return 0;
}
