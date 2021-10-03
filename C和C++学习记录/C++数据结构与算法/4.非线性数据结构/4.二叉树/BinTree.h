#include <iostream>
#include <string>
#include "LinkNodeB.h"
#include "LinkStack.h"
#include "oLinkqueue.h"
//ʵ�ֶ�������Ҫ�õ����к�ջ,�������ͷһ���ļ��У�
//�������������include

using namespace std;

template <typename T> 
class BinTree {
	
public:
	//�����ն�����,���캯������
	BinTree() {
		root = NULL;
	}
	~BinTree() {
		clear();
	}
	//��ն�����
	void clear() {
		DeleteSubTree(root);
	}
	//�������ڵ�
	LinkNodeB<T>* createRoot(const T& x);
	//�ж����Ƿ�Ϊ��
	bool isEmpty() {
		return root == NULL;
	}
	//��ȡ���ڵ�
	LinkNodeB<T>* getRoot() {
		return root;
	}
	//�򸸽ڵ�������Ӳ���������
	LinkNodeB<T>* insertLchild(LinkNodeB<T>* parent, T& x);
	//�򸸽ڵ�����Һ��Ӳ���������
	LinkNodeB<T>* insertRchild(LinkNodeB<T>* parent, T& x);

	//�޸�ָ���ڵ��data
	bool modify(LinkNodeB<T>* decnode, const T& x);
	//��ȡָ���ڵ��Ԫ��ֵ
	bool getNodedata(LinkNodeB<T>* decnode, T x);
	//��ȡָ���ڵ�����ӽڵ�
	LinkNodeB<T> * getLchild(LinkNodeB<T>* decnode) {
		if (decnode == NULL) {
			return NULL;
		}
		else {
			//return decnode->lchild;
			return getLchild(decnode);
		}
	}
	//��ȡָ���ڵ���Һ��ӽڵ�
	LinkNodeB<T> * getRchild(LinkNodeB<T>* decnode) {
		if (decnode == NULL) {
			return NULL;
		}
		else {
			return decnode->rchild;
		
		}
	}

	//�������
	void preOrder(LinkNodeB<T>* proot) {//�������
		if (proot == NULL) {
			return ;
		}
		cout << proot->data << endl;

		preOrder(proot->lchild);//������Ϊ��
		preOrder(proot->rchild);
	}

	//�������
	void inOrder(LinkNodeB<T>* proot) {//�������
		if (proot == NULL) {
			return;
		}

		inOrder(proot->lchild);
		cout << proot->data << endl;
		inOrder(proot->rchild);
	}

	//�������
	void postOrder(LinkNodeB<T>* proot) {//�������
		if (proot == NULL) {
			return;
		}

		postOrder(proot->lchild);
		postOrder(proot->rchild);
		cout << proot->data << endl;
	}

	///����ǵݹ����������ջ
	
	//1.���ڵ���ջ
	//ջ������ѭ��
	//2.��ջ����ָ���Ԫ�ء����к��Ӳ��գ��к�����ջ�����Ӳ���������ջ��
	//3.���в���2��һֱ������
	void preNoOrder(LinkNodeB<T>* proot) {//�������
		if (proot == NULL) {
			return ;
		}
		LinkStack<LinkNodeB<T>* > ls;//����ջ�����ָ��
	
		ls.push(proot);
		LinkNodeB<T>* p = NULL;
		while (!ls.isEmpty()) {
			ls.pop(p);//��ջ����p
			cout << p->data << endl;

			if (p->rchild != NULL) {
				ls.push(p->rchild);
			}
			if (p->lchild != NULL) {
				ls.push(p->lchild);
			}
		}

	}

	//�ǵݹ�������
	//1.���ڵ����
	//�Ӳ�����ѭ��
	//2.���ӷ���ָ���Ԫ�ء����к��Ӳ��գ��к�����ӣ����Ӳ���������ӣ�
	//3.���в���2��һֱ������
	void levelOrder(LinkNodeB<T>* proot) {//�������
		if (proot == NULL) {
			return;
		}
		oLinkqueue<LinkNodeB<T>* > lq;//�����ӣ����ָ��

		lq.insert(proot);
		LinkNodeB<T>* p = NULL;
		while (!lq.isEmpty()) {
			lq.out(p);//���ӷ���p
			cout << p->data << endl;

			if (p->lchild != NULL) {
				lq.insert(p->lchild);
			}
			if (p->rchild != NULL) {
				lq.insert(p->rchild);
			}
		}

	}


	//���ǵݹ��ȡָ���ڵ�ĸ��ڵ�
	LinkNodeB<T>* getParent(LinkNodeB<T>* decnode);
	//ɾ��ָ���ڵ�Ϊ��������
	void DeleteSubTree(LinkNodeB<T>* decnode);
	//ɾ��ָ���ڵ������ͽڵ�
	void DeleteSubTreeNode(LinkNodeB<T>* decnode);
	//���ǵݹ�ڵ���ݹؼ��ֲ��ҽڵ㲢����
	LinkNodeB<T>* SearchbyKey(const T& y);
private:
	LinkNodeB<T> *root;//ָ����ڵ�
};

//�������ڵ�,���ڵ����Ϊ��
template<typename T>
LinkNodeB<T>* BinTree<T>::createRoot(const T& x) {
	if (root != NULL) {
		root->data = x;
		return root;
	}
	else {
		root = new LinkNodeB<T>(x);//�����вι���
		return root;
	}
}

//�򸸽ڵ�������Ӳ���������
template<typename T>
LinkNodeB<T>*  BinTree<T>::insertLchild(LinkNodeB<T>* parent, T& x) {
	if (parent ==NULL) {//�����ڵĸ���
		return NULL;
	}
	LinkNodeB<T>* p = new LinkNodeB<T>(x);//��������
	if (p == NULL)
		return NULL;//����ʧ��
	parent->lchild = p;
	return p;
}

//�򸸽ڵ�����Һ��Ӳ������Һ���
template<typename T>
LinkNodeB<T>*  BinTree<T>::insertRchild(LinkNodeB<T>* parent, T& x) {
	if (parent == NULL) {//�����ڵĸ���
		return NULL;
	}
	LinkNodeB<T>* p = new LinkNodeB<T>(x);//�����Һ���
	if (p == NULL)
		return NULL;//����ʧ��
	parent->rchild = p;
	return p;
}

template<typename T>
bool BinTree<T>::modify(LinkNodeB<T>* decnode, const T& x) {
	if (decnode == NULL) {
		return false;
	}
	else {
		decnode->data = x;
		return true;
	}
}

template<typename T>
bool BinTree<T>::getNodedata(LinkNodeB<T>* decnode, T x) {
	if (decnode == NULL) {
		return false;
	}
	else {
		x = decnode->data;
		return true;
	}
}

//���ǵݹ��ȡָ���ڵ�ĸ��ڵ�,������˼��
template<typename T>
LinkNodeB<T>* BinTree<T>::getParent(LinkNodeB<T>* decnode) {
	if (decnode == root) {
		return NULL;
	}
	if (NULL == root) {
		return NULL;
	}
	oLinkqueue<LinkNodeB<T>* > lq;//�����ӣ����ָ��

	lq.insert(decnode);
	LinkNodeB<T>* p = NULL;//��ų��ӵ�ָ��
	while (!lq.isEmpty()) {
			lq.out(p);//���ӷ���p
			
			if (getLchild(p) == decnode || getRchild(p) == decnode)
				return p;
			if (getLchild(p) != NULL) {
				LinkNodeB<T>* t = getLchild(p);
				lq.insert(t);
			}
			if (getRchild(p) != NULL) {
			LinkNodeB<T>* t = getRchild(p);
			lq.insert(t);
		}
	}
	return NULL;
}

//ɾ��ָ���ڵ�Ϊ��������
template<typename T>
void BinTree<T>::DeleteSubTree(LinkNodeB<T>* decnode) {
	if (decnode == root)
	{
		root = NULL;
	}
	else if (decnode == NULL)
	{
		return;
	}
	else if (getParent(decnode) != NULL) {
		LinkNodeB<T>* t = getParent(decnode);
		LinkNodeB<T>* p = NULL;
		if ((p=getLchild(t)) == decnode) {
			p = NULL;
		}
		else if ((p=getRchild(t)) == decnode) {
			p = NULL;
		}
	}
	else
		return;//��������
	DeleteSubTreeNode(decnode);//����

}
//ɾ��ָ���ڵ������ͽڵ�,��α���
template<typename T>
void BinTree<T>::DeleteSubTreeNode(LinkNodeB<T>* decnode) {
	if (decnode==NULL) {
		return ;
	}
	oLinkqueue<LinkNodeB<T>* > lq;//�����ӣ����ָ��

	lq.insert(decnode);
	LinkNodeB<T>* p = NULL;//��ų��ӵ�ָ��
	while (!lq.isEmpty()) {
		lq.out(p);//���ӷ���p

		if (p->lchild != NULL) {
			lq.insert(p->lchild);
		}
		if (p->rchild != NULL) {
			lq.insert(p->rchild);
		}
		delete p;//ɾ���ڵ�
	}
}

//���ǵݹ�ڵ���ݹؼ��ֲ��ҽڵ㲢����
template<typename T>
LinkNodeB<T>*  BinTree<T>::SearchbyKey(const T& y) {
	if (root == NULL) {
		return NULL;
	}
	oLinkqueue<LinkNodeB<T>* > lq;//�����ӣ����ָ��

	lq.insert(root);//������ʼ
	LinkNodeB<T>* p = NULL;//��ų��ӵ�ָ��
	while (!lq.isEmpty()) {
		lq.out(p);//���ӷ���p
		if (p->data == y)
			return p;
		if (p->lchild != NULL) {
			lq.insert(p->lchild);
		}
		if (p->rchild != NULL) {
			lq.insert(p->rchild);
		}
	}

	return NULL;//
}