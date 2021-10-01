#include "LinkNode.h"
#include "LinkStack.h"
#include <iostream>
using namespace std;
int main() {
	LinkStack<int> linkstack;//无参构造和默认构造
	cout << "getLen():"<<linkstack.getLen() << endl;
	int x = 1;
	linkstack.push(x);
	x = 2;
	linkstack.push(x);
	x = 3;
	linkstack.push(x);
	x = 4;
	linkstack.push(x);
	cout << linkstack << endl;
	int y=NULL;
	linkstack.pop(x);
	cout << y << endl << linkstack;

	return 0;
}