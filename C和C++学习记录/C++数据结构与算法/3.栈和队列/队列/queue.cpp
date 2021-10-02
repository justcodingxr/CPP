#include <iostream>
#include <string>
using namespace std;
//顺序队列可以用一维数组实现
//front=(front+1)%maxsize;rear=(rear+1)%maxsize
//判定一：
//少用一个元素空间：入队前：（rear+1)%maxsize==front,则认为溢出
//二：计数器

template<typename T>
class Linearqueue {
public:
	Linearqueue(int maxsize) {
		Maxsize = maxsize;
		front = 0;
		rear = 0;
		size = 0;
		element = new T[Maxsize];
	};
	~Linearqueue() {
		delete []element;
	};

	int getNum() {
		return size;
	}

	///入队
	bool insert(T& x);
	//出队
	bool out(T& x);
	void output(ostream& os);

	bool isFull() {
		return size == Maxsize;
	}

	bool isEmpty() {
		return front == rear;
	}
private:
	int front, rear;
	int Maxsize;
	T* element;
	int size;
};

template<typename T>
bool Linearqueue<T>::insert(T& x) {
	if (isFull()) {
		cout << "队列满" << endl;
		return false;
	}
	else {
		element[rear] = x;
		rear++;
		size++;
		return true;
	}
}

template<typename T>
bool Linearqueue<T>::out(T& x) {
	if (isEmpty()) {
		cout << "队空" << endl;
		return false;
	}
	else {
		x = element[front];
		front++;
		size--;
		return true;
	}
}

template<typename T>
void Linearqueue<T>::output(ostream& os) {
	for (int i = front; i < rear; i++) {
		os << element[i] << " ";
	}
}

template<typename T>
ostream& operator<<(ostream& os, Linearqueue<T>& lq) {
	lq.output(os);
	return os;
}

int main() {
	Linearqueue<int> lq(3);
	cout << "元素个数:"<<lq.getNum() << endl;

	int x = 1;
	lq.insert(x);
	 x = 2;
	lq.insert(x);
	 x = 3;
	lq.insert(x);
	cout << lq << endl;

	x = 4;
	lq.insert(x);

	lq.out(x);
	cout << x << endl;
	cout << lq << endl;
	lq.out(x);
	cout << x << endl;
	lq.out(x);
	cout << x << endl;
	lq.out(x);
	



	return 0;
}


