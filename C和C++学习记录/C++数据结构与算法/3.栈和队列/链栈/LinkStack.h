#include <iostream>
using namespace std;
template<typename T>
class LinkStack {
public:
	LinkStack() {
		len = 0;
		top = NULL;
	}

	~LinkStack();//析构LinkNode类

	bool isEmpty() {
		return top == NULL;
	}

	int getLen() {
		return len;
	}

	bool push(T& x);
	bool pop(T x) ;

	bool gettop(T x);

	void output(ostream& os) {
		LinkNode<T> *p = top;
		for (int i = 0; i < getLen(); i++) {
			os << p->data << endl;
			p = p->next;
		}
	}
private:
	LinkNode<T> *top;
	int len;//元素个数
};


template<typename T>
LinkStack<T>::~LinkStack() {
	while (top!=NULL) {
		T x=NULL;
		pop(x);//含有delete操作
	}
 }

template<typename T>
bool LinkStack<T>::push(T& x) {
	LinkNode<T> *p = new LinkNode<T>();
	p->data = x;
	p->next = top;
	top = p;
	len++;
	return true;
}

template<typename T>
bool LinkStack<T>::pop(T x) {
	if (isEmpty()) {
		return false;
	}
	else {
		T x;
		LinkNode<T> *p = top;
		x = p->data;
		top = p->next;
		delete p;
		len--;
		return true;
	}
}

template<typename T>
bool LinkStack<T>::gettop(T x) {
	if (isEmpty()) {
		return false;
	}
	else {
		x = top->data;
		return true;
	}
}

template<typename T>
ostream& operator<<(ostream& os, LinkStack<T>& linkstack) {
	linkstack.output(os);
	return os;
}