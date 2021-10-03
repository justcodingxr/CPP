#include "BinTree.h"
#include <iostream>
using namespace std;

//二叉树的插入生成，插入主树
//（1）若为空树，k就作为根节点
//（2)  若不空：若等于根节点，直接返回；若小于根节点， （若左孩子不存在则插入），插入左子树；
//																	若大于根节点，（若右孩子不存在则插入），插入右子树

template<typename T>
void insertBST(BinTree<T>& btree, T k) {
	LinkNodeB<T>* p = NULL, *pchild = NULL;
	T x = NULL;
	if (btree.isEmpty()) {
		btree.createRoot(k);
	}
	p = btree.getRoot();
	while (p != NULL) {
		btree.getNodedata(p, x);
		if (k == x)
			return;
		if (k < x) {
			if (btree.getLchild(p) == NULL)
			{
				btree.insertLchild(p, k);
				return;
			}
			else {

				p = btree.getLchild(p);
			}
		}

		if (k > x) {
			if (btree.getRchild(p) == NULL)
			{
				btree.insertRchild(p, k);
				return;
			}
			else {
				p = btree.getRchild(p);
			}
		}
	}
}

template<typename T>
void createBST(T a[], int size, BinTree<T>& bt) {
	for (int i = 0; i < size; i++) {
		insertBST(bt, a[i]);
	}
}

