//�������Ĳ������ɣ���������
//��1����Ϊ������k����Ϊ���ڵ�
//��2)  �����գ������ڸ��ڵ㣬ֱ�ӷ��أ���С�ڸ��ڵ㣬 �������Ӳ���������룩��������������
//																	�����ڸ��ڵ㣬�����Һ��Ӳ���������룩������������

#include <iostream>
#include "BST.h"

using namespace std;

int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	BinTree<int> bt;
	createBST(a, 10,bt);
	bt.preOrder(bt.getRoot());
	bt.inOrder(bt.getRoot());
	bt.postOrder(bt.getRoot());
	cout << "====" << endl;
	return 0;
}