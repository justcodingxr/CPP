#include <iostream>
using namespace std;
template<typename T>
class LinkNode {
public:
	template<typename T>
	friend class LinkStack;
	LinkNode() {
		next =NULL;
	}
	//���ݺ�ָ�벻��Ҫ�Զ�������
private:
	T data;
	LinkNode<T>  *next;
};
