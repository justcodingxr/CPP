/*Node.h*/
#ifndef  NODE
#define NODE
#endif
#include <iostream>
#include <string>
using namespace std;

class Node {
	public:
		Node() { };
		Node(char*  name, char * no, int  grade[]);
		Node& getNode();
		void  outputnode(ostream &os) const;
	private:
		string name;
		string no;
		int score[3];
};

Node::Node(char*  name, char * no, int  grade[]) {
	name = name;
	no = no;
	for (int i = 0; i < 3; i++) {
		score[i] = grade[i];
	}
}

Node& Node::getNode() {//Node�ɼ���getNode���ɼ�
	return *this;
}

void Node::outputnode(ostream& os) const {//�������
	os << name << " " << no << endl;
	os << "���ģ�" << score[0] << endl;
	os << "��ѧ��" << score[1] << endl;
	os << "Ӣ�" << score[2] << endl;
}

//����<<
ostream& operator<<(ostream& os, Node& node) {
	node.outputnode(os);
	return os;
}