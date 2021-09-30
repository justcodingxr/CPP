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

//单向循环链表类，以head为起点，实现操作
template<typename T>
class LinkList {
public:
	//构造
	LinkList() {
		head = new LinkNode<T>();
		head->next = head;
		head->data = NULL;
	}
	//析构
	~LinkList() {
		T  x = NULL;
		for (int i = getLength(); i > 0; i--) {
			deletebyIndex(i, x);
		}
		delete head;
	}
	//判空
	bool isEmpty() {
		if (getLength() == 0) {
			return true;
		}
		return false;
	}
	//获取元素个数
	int getLength() {
		LinkNode<T>  *p = head->next;
		int len = 0;
		while (p != head) {
			len++;
			p = p->next;
		}
		return len;
	}
	///通过位置删除元素返回LinkList&
	LinkList<T>& deletebyIndex(int k, T& x) {
		LinkNode<T> *p = head;
		if (getLength() == 0) {
			cout << "链表为空不删除" << endl;
			return *this;
		}
		else if (k % (getLength() + 1) == 0) {
			cout << "head不可删除" << endl;
		}
		else {
			for (int i = 1; i < (k % (getLength() + 1)); i++) {
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
			deletebyIndex(find(x), y);
		}
		return *this;
	}
	//按位置插入元素
	LinkList &insert(int k, T x) {
		if(k==1){
			LinkNode<T> *q = new LinkNode<T>();
			q->data = x;
			q->next = head->next;
			head->next = q;
		}
		else if (  (k % (getLength() + 1)) == 0||k<=1 ) {
			cout << endl << "k位置头节点无法插入" << endl;
			return *this;
		}
		else
		{
			LinkNode<T> *p = head;
			for (int i = 0; i < (k % (getLength() + 1) - 1); i++) {
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
		if (head->next ==head || (k % (getLength() + 1) )== 0) {
			return false;
		}else{
			LinkNode<T> *p = head;
			for (int i = 0; i < (k % (getLength() + 1)); i++) {
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
		while (p->next != head && p->next->data != x) {
			p = p->next;
			k++;
		}
		if (p->next != head) {
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
	cout << list.isEmpty() << endl;
	cout << "0,2" << endl;
	list.insert(0, 2);
	cout << "1,1" << endl;
	list.insert(1, 1);
	cout << "2,2" << endl;
	list.insert(2, 2);
	cout << "3,3" << endl;
	list.insert(3, 3);
	cout << "4,4" << endl;
	list.insert(4, 4);
	cout << "5,5" << endl;
	list.insert(5, 5);
	cout << endl;
	cout << list << endl;
	//按位置获取元素
	int x;
	list.getbyIndex(3, x);
	cout << "x:" << x << endl;

	//按位置删除元素
	int y;
	list.deletebyIndex(2, y);
	cout << list << endl;
	cout << "y:" << y << endl;

	//获取元素个数
	cout << "getLength():" << list.getLength() << endl;

	//按关键字查找值
	cout << list.find(5) << endl;

	//按关键字删除
	list.deletebyKey(9);
	list.deletebyKey(5);
	cout << list;
	list.insert(15, 5);
	list.insert(7, 7);
	cout << list;
	return 0;
}
