//二叉树的插入生成，插入主树
//（1）若为空树，k就作为根节点
//（2)  若不空：若等于根节点，直接返回；若小于根节点， （若左孩子不存在则插入），插入左子树；
//																	若大于根节点，（若右孩子不存在则插入），插入右子树

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