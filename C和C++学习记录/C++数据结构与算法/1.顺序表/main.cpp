#include <iostream>
#include "LinearList.h"
#include "node.h"
#include <string>
#include <iostream>
using namespace std;

int main() {

	LinearList<int> List(10);//LinearList<int>ģ����

	List.insert(1, 100);
	List.insert(2, 200);
	List.insert(3, 300);
	List.insert(4, 400);
	cout << "��ǰ���ȣ�" << List.getLength() << endl;
	cout << "��ǰԪ�أ�" << List;//�������������<<
	int m;
	if (List.getData(3, m)) {
		cout << "������Ԫ�أ�" << m << endl;
	}
	int x = 200;
	cout << "Ԫ��200�ڱ���λ�ã�" << List.find(x) << endl;

	//��200��Ϊ250
	List.modifyData(List.find(x), 250);
	if (List.getData(2, x)) {
		cout << "�ڶ���Ԫ�أ�" << x << endl;
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

	cout << listnode;//<<LinearList�����Ԫ�أ�Ԫ����node
	//�ȼ���<<����node������ostream& operator<<(ostream& os, Node& node)
	return 0;
}
