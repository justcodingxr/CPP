#include<iostream>
#include<string>
#include<memory>
using namespace std;
///顺序栈可以用一维动态数组实现
template<typename T> 
class LinearStack {
	public:
		LinearStack(int lMaxsize);
		~LinearStack();

		bool isEmpty();//是否为空
		bool isFull();//是否满
		int getNum();//求元素个数
		bool push(const T& x);//插入元素，成功返回true
		bool pop(T& x);//从栈顶删除一个元素，值存入x
		void output(ostream& os) ;//输出
		

	private:
		int top;
		int Maxsize;//最多元素个数
		T *element;
};

template<typename T>
LinearStack<T>::LinearStack(int lMaxsize) {
	Maxsize = lMaxsize;
	element = new T[Maxsize];//T* element=new T[Maxsize]；错误写法
	top = -1;
}

template<typename T>
LinearStack<T>::~LinearStack() {
	delete []element;
}

template<typename T>
bool LinearStack<T>::isEmpty() {
	return top == -1;
}

template<typename T>
bool LinearStack<T>::isFull() {
	return top+1==Maxsize ;
}


template<typename T>
bool LinearStack<T>::push(const T& x) {
	if (isFull()) {
		return false;
	}
	else {
		
		element[++top] = x;
		return true;
	}
}

template<typename T>
bool LinearStack<T>::pop(T& x) {
	if (isEmpty()) {
		return false;
	}
	else {
		x = element[top];
		top--;
		return true;
	}
	
}

template<typename T>
void LinearStack<T>::output(ostream& os)  {
	if (isEmpty()) {
		
	}
	else {
		int k = top;
		while (k != -1) {
			os << element[k];
			k--;
		}

	}
}

template<typename T>
ostream& operator<<(ostream& os, LinearStack<T>& lstack) {//非常量成员函数，const不可写
	lstack.output(os);
	return os;
}