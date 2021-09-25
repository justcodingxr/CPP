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

Node& Node::getNode() {//Node可见，getNode不可见
	return *this;
}

void Node::outputnode(ostream& os) const {//内类输出
	os << name << " " << no << endl;
	os << "语文：" << score[0] << endl;
	os << "数学：" << score[1] << endl;
	os << "英语：" << score[2] << endl;
}

//重载<<
ostream& operator<<(ostream& os, Node& node) {
	node.outputnode(os);
	return os;
}