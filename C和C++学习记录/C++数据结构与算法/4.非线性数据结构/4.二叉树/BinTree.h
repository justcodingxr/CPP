#include <iostream>
#include <string>
#include "LinkNodeB.h"
#include "LinkStack.h"
#include "oLinkqueue.h"
//实现二叉链表要用到队列和栈,将其放入头一个文件夹，
//再添加现有项，最后include

using namespace std;

template <typename T> 
class BinTree {
	
public:
	//创建空二叉树,构造函数就行
	BinTree() {
		root = NULL;
	}
	~BinTree() {
		clear();
	}
	//清空二叉树
	void clear() {
		DeleteSubTree(root);
	}
	//创建根节点
	LinkNodeB<T>* createRoot(const T& x);
	//判断树是否为空
	bool isEmpty() {
		return root == NULL;
	}
	//获取根节点
	LinkNodeB<T>* getRoot() {
		return root;
	}
	//向父节点插入左孩子并返回左孩子
	LinkNodeB<T>* insertLchild(LinkNodeB<T>* parent, T& x);
	//向父节点插入右孩子并返回左孩子
	LinkNodeB<T>* insertRchild(LinkNodeB<T>* parent, T& x);

	//修改指定节点的data
	bool modify(LinkNodeB<T>* decnode, const T& x);
	//获取指定节点的元素值
	bool getNodedata(LinkNodeB<T>* decnode, T x);
	//获取指定节点的左孩子节点
	LinkNodeB<T> * getLchild(LinkNodeB<T>* decnode) {
		if (decnode == NULL) {
			return NULL;
		}
		else {
			//return decnode->lchild;
			return getLchild(decnode);
		}
	}
	//获取指定节点的右孩子节点
	LinkNodeB<T> * getRchild(LinkNodeB<T>* decnode) {
		if (decnode == NULL) {
			return NULL;
		}
		else {
			return decnode->rchild;
		
		}
	}

	//先序遍历
	void preOrder(LinkNodeB<T>* proot) {//遍历起点
		if (proot == NULL) {
			return ;
		}
		cout << proot->data << endl;

		preOrder(proot->lchild);//孩子作为根
		preOrder(proot->rchild);
	}

	//中序遍历
	void inOrder(LinkNodeB<T>* proot) {//遍历起点
		if (proot == NULL) {
			return;
		}

		inOrder(proot->lchild);
		cout << proot->data << endl;
		inOrder(proot->rchild);
	}

	//后序遍历
	void postOrder(LinkNodeB<T>* proot) {//遍历起点
		if (proot == NULL) {
			return;
		}

		postOrder(proot->lchild);
		postOrder(proot->rchild);
		cout << proot->data << endl;
	}

	///先序非递归遍历，利用栈
	
	//1.根节点入栈
	//栈不空则循环
	//2.出栈访问指针和元素。若有孩子不空，有孩子入栈；左孩子不空左孩子入栈；
	//3.进行步骤2，一直持续。
	void preNoOrder(LinkNodeB<T>* proot) {//遍历起点
		if (proot == NULL) {
			return ;
		}
		LinkStack<LinkNodeB<T>* > ls;//建立栈，存放指针
	
		ls.push(proot);
		LinkNodeB<T>* p = NULL;
		while (!ls.isEmpty()) {
			ls.pop(p);//出栈放入p
			cout << p->data << endl;

			if (p->rchild != NULL) {
				ls.push(p->rchild);
			}
			if (p->lchild != NULL) {
				ls.push(p->lchild);
			}
		}

	}

	//非递归逐层遍历
	//1.根节点入队
	//队不空则循环
	//2.出队访问指针和元素。若有孩子不空，有孩子入队；左孩子不空左孩子入队；
	//3.进行步骤2，一直持续。
	void levelOrder(LinkNodeB<T>* proot) {//遍历起点
		if (proot == NULL) {
			return;
		}
		oLinkqueue<LinkNodeB<T>* > lq;//建立队，存放指针

		lq.insert(proot);
		LinkNodeB<T>* p = NULL;
		while (!lq.isEmpty()) {
			lq.out(p);//出队放入p
			cout << p->data << endl;

			if (p->lchild != NULL) {
				lq.insert(p->lchild);
			}
			if (p->rchild != NULL) {
				lq.insert(p->rchild);
			}
		}

	}


	//按非递归获取指定节点的父节点
	LinkNodeB<T>* getParent(LinkNodeB<T>* decnode);
	//删除指定节点为根的子树
	void DeleteSubTree(LinkNodeB<T>* decnode);
	//删除指定节点子树和节点
	void DeleteSubTreeNode(LinkNodeB<T>* decnode);
	//按非递归节点根据关键字查找节点并返回
	LinkNodeB<T>* SearchbyKey(const T& y);
private:
	LinkNodeB<T> *root;//指向根节点
};

//创建根节点,根节点可能为空
template<typename T>
LinkNodeB<T>* BinTree<T>::createRoot(const T& x) {
	if (root != NULL) {
		root->data = x;
		return root;
	}
	else {
		root = new LinkNodeB<T>(x);//调用有参构造
		return root;
	}
}

//向父节点插入左孩子并返回左孩子
template<typename T>
LinkNodeB<T>*  BinTree<T>::insertLchild(LinkNodeB<T>* parent, T& x) {
	if (parent ==NULL) {//不存在的父亲
		return NULL;
	}
	LinkNodeB<T>* p = new LinkNodeB<T>(x);//创建左孩子
	if (p == NULL)
		return NULL;//创建失败
	parent->lchild = p;
	return p;
}

//向父节点插入右孩子并返回右孩子
template<typename T>
LinkNodeB<T>*  BinTree<T>::insertRchild(LinkNodeB<T>* parent, T& x) {
	if (parent == NULL) {//不存在的父亲
		return NULL;
	}
	LinkNodeB<T>* p = new LinkNodeB<T>(x);//创建右孩子
	if (p == NULL)
		return NULL;//创建失败
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

//按非递归获取指定节点的父节点,逐层遍历思想
template<typename T>
LinkNodeB<T>* BinTree<T>::getParent(LinkNodeB<T>* decnode) {
	if (decnode == root) {
		return NULL;
	}
	if (NULL == root) {
		return NULL;
	}
	oLinkqueue<LinkNodeB<T>* > lq;//建立队，存放指针

	lq.insert(decnode);
	LinkNodeB<T>* p = NULL;//存放出队的指针
	while (!lq.isEmpty()) {
			lq.out(p);//出队放入p
			
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

//删除指定节点为根的子树
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
		return;//不在树中
	DeleteSubTreeNode(decnode);//调用

}
//删除指定节点子树和节点,层次遍历
template<typename T>
void BinTree<T>::DeleteSubTreeNode(LinkNodeB<T>* decnode) {
	if (decnode==NULL) {
		return ;
	}
	oLinkqueue<LinkNodeB<T>* > lq;//建立队，存放指针

	lq.insert(decnode);
	LinkNodeB<T>* p = NULL;//存放出队的指针
	while (!lq.isEmpty()) {
		lq.out(p);//出队放入p

		if (p->lchild != NULL) {
			lq.insert(p->lchild);
		}
		if (p->rchild != NULL) {
			lq.insert(p->rchild);
		}
		delete p;//删除节点
	}
}

//按非递归节点根据关键字查找节点并返回
template<typename T>
LinkNodeB<T>*  BinTree<T>::SearchbyKey(const T& y) {
	if (root == NULL) {
		return NULL;
	}
	oLinkqueue<LinkNodeB<T>* > lq;//建立队，存放指针

	lq.insert(root);//树根开始
	LinkNodeB<T>* p = NULL;//存放出队的指针
	while (!lq.isEmpty()) {
		lq.out(p);//出队放入p
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