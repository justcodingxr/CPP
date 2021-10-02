#include "LinkNode.h"
#include "oLinkqueue.h"
#include <iostream>
using namespace std;

int main() {
	oLinkqueue<int> ol;
	cout << ol.getNum() << endl;

	int x=-1;
	ol.out(x);
	cout << x << endl;

	x = 1;
	ol.insert(x);
	x = 2;
	ol.insert(x);
	x = 3;
	ol.insert(x);
	cout << ol.getNum() << endl;
	cout << ol << endl;

	ol.out(x);
	ol.out(x);
	cout << ol << endl;
	ol.out(x);
	ol.out(x);
	return 0;
}