#include <iostream>
#include <string>
using namespace std;

template<typename T>
class LinkNode{
	template<typename T>
	friend class oLinkqueue;
public:
	LinkNode() {
		next = NULL;
	};
private:
	T data;
	LinkNode<T>* next;
};
