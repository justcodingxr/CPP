/*31. 数组做参数和边界问题
2021-09-14 17:20
*/
#include <iostream>
using namespace std;

//数组作为函数形参，有三种选择方式，一、声明为指针，二、声明为不限定长度的指针，三、限定为长度的数组
//实际上数组传入函数时，实参自动转换为指向首元素的指针；三种声明形参的方式等价
//直接将数组名写入函数调用即可
void f1(int *p) {
	cout << *p << " ";
	cout << *(p + 1) << " ";
	cout << *(p + 5) << endl;
}

void f2(int *p, int sz) {
	int i = 0;
	while (i != sz) {
		cout << *p++ << " ";
		i++;
	}
}

void f3(int *b, int *e) {//C++11 数组调用begin，end获得指针，end返回末尾元素后面地址的指针
	while (b != e) {
		cout << *b << " ";
		b++;
	}
}

void f4(int a[], int sz) {
	for (int i = 0; i < sz; i++) {
		cout << a[i] << " ";
	}
}

void f5(int a[5]) { //给定维度容易产生危险,参数期望小于实际，输出一部分
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
}

void f6(int a[15]) { //给定维度容易产生危险，期望参数大于实际，输出后面未定义值
	for (int i = 0; i < 15; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	cout << "arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};" << endl;
	cout << endl << "======f1" << endl;
	f1(arr);


	cout << endl << "======f2" << endl;
	f2(arr, 6);//数组名作为指针用

	cout << endl << "======f3" << endl;
	int *b = begin(arr), *e = end(arr);
	f3(b, e);//数组名作为指针用


	cout << endl << "======f4" << endl;
	f4(arr, 10);

	cout << endl << "======f5" << endl;
	f5(arr);

	cout << endl << "======f6" << endl;
	f6(arr);
	return 0;
}

