#include <iostream>
#include <string>
using namespace std;
//链队，入队方向与指针箭头相反

template<typename T>
class oLinkqueue {
public:
	oLinkqueue() {
		size = 0;
		front = NULL;
		rear = NULL;
	}
	~oLinkqueue();

	int getNum() {
		return size;
	}
	bool isEmpty() {
		return size == 0;
	}

	bool insert(T& x);
	bool out(T& x);
	void output(ostream& os);

private:
	int size;
	LinkNode<T>*  front;
	LinkNode<T>*  rear;
};

template<typename T>
oLinkqueue<T>::~oLinkqueue() {
	while (front != NULL) {
		LinkNode<T>* p = front->next;
		T x =NULL;
		out( x);
		front = p;
	}
}

template<typename T>
bool oLinkqueue<T>::insert(T& x) {
	LinkNode<T>* p = new LinkNode<T>;
	if (p == NULL) {
		return false;
	}
	else {
		p->data = x;
		if (isEmpty()) {
			front = rear = p;
			size++;
		}
		else {
			rear->next = p;
			rear = p;
			size++;
			
		}
		return true;
	}

}

template<typename T>
bool oLinkqueue<T>::out(T& x) {
	if (isEmpty()) {
		cout << "队列空" << endl;
		return false;
	}
	else {
		LinkNode<T>* p=NULL;
		p = front;
		x = p->data;
		front = front->next;
		delete p;
		size--;
		return true;
	}
}

template<typename T>
void oLinkqueue<T>::output(ostream& os) {
	LinkNode<T>* p = front;
	while (p != NULL) {
		os << p->data<<" ";
		p = p->next;
	}
}

template<typename T>
ostream& operator<<(ostream& os, oLinkqueue<T>& ol) {
	ol.output(os);
	return os;
}