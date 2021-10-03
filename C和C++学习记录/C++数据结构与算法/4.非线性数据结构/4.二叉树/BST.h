#include "BinTree.h"
#include <iostream>
using namespace std;

//�������Ĳ������ɣ���������
//��1����Ϊ������k����Ϊ���ڵ�
//��2)  �����գ������ڸ��ڵ㣬ֱ�ӷ��أ���С�ڸ��ڵ㣬 �������Ӳ���������룩��������������
//																	�����ڸ��ڵ㣬�����Һ��Ӳ���������룩������������

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

