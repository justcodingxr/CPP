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
	//数据和指针不需要自定义析构
private:
	T data;
	LinkNode<T>  *next;
};
