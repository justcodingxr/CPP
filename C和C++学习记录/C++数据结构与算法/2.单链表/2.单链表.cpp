#include <iostream>
using namespace std;

//存储结点类
template<typename T>
class LinkNode {
	template<typename T>
	friend class LinkList;
public:
	LinkNode() {
	next = NULL;
	}
private:
	T data;
	LinkNode<T>  *next;
};

//单向链表类，以head为起点，实现操作
template<typename T>
class LinkList {
public:
	//构造
	LinkList() {
		head = new LinkNode<T>();
	}
	//析构
	~LinkList() {
		T  x=NULL;
		for (int i = getLength(); i > 0; i--) {
			deletebyIndex(i,x);
		}
		delete head;
	}
	//判空
	bool isEmpty() {
		if (getLength()==0){
			return true;
		}
		return false;
	}
	//获取元素个数
	int getLength() {
		LinkNode<T>  *p = head->next;
		int len = 0;
		while (p) {
			len++;
			p = p->next;
		}
		return len;
	}
	   ///通过位置删除元素返回LinkList&
		LinkList<T>& deletebyIndex (int k,  T& x) { 
		LinkNode<T> *p = head;
		if (getLength()==0) {
			cout << "链表为空不删除" << endl;
			return *this;
		}
		else {
			for (int i = 1; i < k; i++) {
				p = p->next; //移动到k-1位置，一个元素不用动
			}
			LinkNode<T>  *q = p->next;
			x = q->data;
			p->next = q->next;
			delete q;
			return *this;
		}

	}
	//按关键字删除元素,返回LinkList&
	LinkList<T>& deletebyKey(T x) {
		if (!find(x)) { //未找到
			cout << "未找到：" << endl;
			return *this;
		}
		else {
			T y;
			deletebyIndex (find(x), y);
		}
		return *this;
	}
	//按位置插入元素
	LinkList &insert(int k, T x) {
		if (k < 1 || k > getLength()+1) {
			cout << "插入位置不合法" << endl;

		}
		else {
			LinkNode<T> *p = head;
			for (int i = 0; i < k - 1; i++) {
				p = p->next;
			}
			LinkNode<T> *q = new LinkNode<T>();
			q->data = x;
			q->next = p->next;
			p->next = q;
		}
		return *this;
	}
	//按位置获取元素，成功返回true
	bool getbyIndex(int k, T &x) {
		if (k < 1 || k > getLength()) {
			cout << "位置不在范围" << endl;
			return false;
		}
		else {
			LinkNode<T> *p = head;
			for (int i = 0; i < k; i++) {
				p = p->next;
			}
			x = p->data;
		}
		return true;
	}
	//按关键字查找位置，返回位置或者0
	int find(T x) {
		LinkNode<T> *p = head;
		int k = 0;
		while (p->next != NULL && p->next->data != x) {
			p = p->next;
			k++;
		}
		if (p->next != NULL) {
			return k + 1;
		}
		else {
			return 0;
		}
	}
	//输出链表元素
	void output(ostream &os) {
		LinkNode<T> *p = head;
		for (int i = 0; i < getLength(); i++) {
			p = p->next;
			cout << p->data << " ";
		}
	}
	
private:
	LinkNode<T>  *head;//很关键，便于指针定位到指定索引的节点处
};
//重载运算符<<
template<typename T>
ostream& operator<<(ostream& os, LinkList<T>& list) {
	list.output(os);
	return os;
}


int main() {
	LinkList<int> list;
	cout << list.isEmpty()<<endl;
	list.insert(0, 2);
	list.insert(1, 1);
	list.insert(2, 2);
	list.insert(3, 3);
	list.insert(4, 4);
	list.insert(5, 5);
	cout << endl;
	cout << list<<endl;
	//按位置获取元素
	int x;
	list.getbyIndex(2, x);
	cout <<"x:"<< x << endl;
	//按位置删除元素
	int y;
	list.deletebyIndex(2, y);
	cout << list << endl;
	cout << "y:"<<y << endl;

	list.insert(6, 6);
	list.insert(5, 5);
	//获取元素个数
	cout <<"getLength():"<< list.getLength() << endl;
	list.insert(6, 6);
	cout << list << endl;
	cout << list <<endl;
	//按关键字查找值
	cout << list.find(6)<<endl;
	//按关键字删除
	list.deletebyKey(9);
	list.deletebyKey(5);
	cout << list;

	return 0;
}
