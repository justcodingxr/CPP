#include <iostream>
using namespace std;
template<typename T>
class LinkNodeB {
	
public:
	template<typename T>
	friend class BinTree;
		LinkNodeB() {
		lchild = NULL;
		rchild = NULL;
		}
		LinkNodeB(const T& x ) {
		lchild = NULL;
		rchild = NULL;
		data = x;
		}
private:
		T data;
		LinkNodeB<T>* lchild, *rchild;
};
