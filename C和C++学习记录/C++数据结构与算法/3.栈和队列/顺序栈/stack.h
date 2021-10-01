#include<iostream>
#include<string>
#include<memory>
using namespace std;
///˳��ջ������һά��̬����ʵ��
template<typename T> 
class LinearStack {
	public:
		LinearStack(int lMaxsize);
		~LinearStack();

		bool isEmpty();//�Ƿ�Ϊ��
		bool isFull();//�Ƿ���
		int getNum();//��Ԫ�ظ���
		bool push(const T& x);//����Ԫ�أ��ɹ�����true
		bool pop(T& x);//��ջ��ɾ��һ��Ԫ�أ�ֵ����x
		void output(ostream& os) ;//���
		

	private:
		int top;
		int Maxsize;//���Ԫ�ظ���
		T *element;
};

template<typename T>
LinearStack<T>::LinearStack(int lMaxsize) {
	Maxsize = lMaxsize;
	element = new T[Maxsize];//T* element=new T[Maxsize]������д��
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
ostream& operator<<(ostream& os, LinearStack<T>& lstack) {//�ǳ�����Ա������const����д
	lstack.output(os);
	return os;
}