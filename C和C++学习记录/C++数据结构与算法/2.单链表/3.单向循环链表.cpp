#include <iostream>
using namespace std;

//�洢�����
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

//����ѭ�������࣬��headΪ��㣬ʵ�ֲ���
template<typename T>
class LinkList {
public:
	//����
	LinkList() {
		head = new LinkNode<T>();
		head->next = head;
		head->data = NULL;
	}
	//����
	~LinkList() {
		T  x = NULL;
		for (int i = getLength(); i > 0; i--) {
			deletebyIndex(i, x);
		}
		delete head;
	}
	//�п�
	bool isEmpty() {
		if (getLength() == 0) {
			return true;
		}
		return false;
	}
	//��ȡԪ�ظ���
	int getLength() {
		LinkNode<T>  *p = head->next;
		int len = 0;
		while (p != head) {
			len++;
			p = p->next;
		}
		return len;
	}
	///ͨ��λ��ɾ��Ԫ�ط���LinkList&
	LinkList<T>& deletebyIndex(int k, T& x) {
		LinkNode<T> *p = head;
		if (getLength() == 0) {
			cout << "����Ϊ�ղ�ɾ��" << endl;
			return *this;
		}
		else if (k % (getLength() + 1) == 0) {
			cout << "head����ɾ��" << endl;
		}
		else {
			for (int i = 1; i < (k % (getLength() + 1)); i++) {
				p = p->next; //�ƶ���k-1λ�ã�һ��Ԫ�ز��ö�
			}
			LinkNode<T>  *q = p->next;
			x = q->data;
			p->next = q->next;
			delete q;
			return *this;
		}

	}
	//���ؼ���ɾ��Ԫ��,����LinkList&
	LinkList<T>& deletebyKey(T x) {
		if (!find(x)) { //δ�ҵ�
			cout << "δ�ҵ���" << endl;
			return *this;
		}
		else {
			T y;
			deletebyIndex(find(x), y);
		}
		return *this;
	}
	//��λ�ò���Ԫ��
	LinkList &insert(int k, T x) {
		if(k==1){
			LinkNode<T> *q = new LinkNode<T>();
			q->data = x;
			q->next = head->next;
			head->next = q;
		}
		else if (  (k % (getLength() + 1)) == 0||k<=1 ) {
			cout << endl << "kλ��ͷ�ڵ��޷�����" << endl;
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
	//��λ�û�ȡԪ�أ��ɹ�����true
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
	//���ؼ��ֲ���λ�ã�����λ�û���0
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
	//�������Ԫ��
	void output(ostream &os) {
		LinkNode<T> *p = head;
		for (int i = 0; i < getLength(); i++) {
			p = p->next;
			cout << p->data << " ";
		}
	}

private:
	LinkNode<T>  *head;//�ܹؼ�������ָ�붨λ��ָ�������Ľڵ㴦
};
//���������<<
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
	//��λ�û�ȡԪ��
	int x;
	list.getbyIndex(3, x);
	cout << "x:" << x << endl;

	//��λ��ɾ��Ԫ��
	int y;
	list.deletebyIndex(2, y);
	cout << list << endl;
	cout << "y:" << y << endl;

	//��ȡԪ�ظ���
	cout << "getLength():" << list.getLength() << endl;

	//���ؼ��ֲ���ֵ
	cout << list.find(5) << endl;

	//���ؼ���ɾ��
	list.deletebyKey(9);
	list.deletebyKey(5);
	cout << list;
	list.insert(15, 5);
	list.insert(7, 7);
	cout << list;
	return 0;
}
