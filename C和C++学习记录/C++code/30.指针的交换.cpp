#include <iostream>
using namespace std;

void swapno(int *pa, int *pb) { //值和对象都不交换
	int *temp;
	temp = pa;
	pa = pb;
	pb = temp;

}

void swapobj(int *pa, int *pb) { //交换对象
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void swappoint(int *&pa, int *&pb) { //交换值，对象也会交换
	int *temp;
	temp = pa;
	pa = pb;
	pb = temp;
}

int main() {
	int a = 11, b = 22;
	cout << "a=11,b=22" << endl;
	int *pa = &a, *pb = &b;
	cout << "pa的值：" << pa << ",pb的值：" << pb << endl;
	cout << "pa指向的对象：" << *pa << ",pb指向的对象：" << *pb << endl;
	cout << endl << "=======swapno(pa, pb)" << endl;

	swapno(pa, pb);
	cout << "pa的值：" << pa << ",pb的值：" << pb << endl;
	cout << "pa指向的对象：" << *pa << ",pb指向的对象：" << *pb << endl;
	cout << endl << "=======swapobj(pa, pb)" << endl;

	swapobj(pa, pb);
	cout << "pa的值：" << pa << ",pb的值：" << pb << endl;
	cout << "pa指向的对象：" << *pa << ",pb指向的对象：" << *pb << endl;
	cout << endl << "=======swappoint(pa, pb)" << endl;

	swappoint(pa, pb);
	cout << "pa的值：" << pa << ",pb的值：" << pb << endl;
	cout  << "pa指向的对象：" << *pa << ",pb指向的对象：" << *pb << endl;
	return 0;
}
