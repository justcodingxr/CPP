/*11.输入十六进制，八进制，输出十进制
*/
#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "输入十六进制a：";
	cin >> hex >> a;
	//hex 为英文单词，意思是 16 进制；
	//经过此语句输入被认为是 16 进制数据，存在变量 a 中；
	cout << "a默认十进制：" << a << endl; //输出变量 a(输出进制默认为 10 进制)

	int b;
	cout << "输入8进制b：";
	cin >> oct >> b;	//八进制
	cout << "b默认十进制：" << b << endl;

	cout << "输入十进制a：";
	cin >> dec >> a;
	cout << "a默认十进制：" << a << endl;
	return 0;
//
//	使用不带.h的头文件<iostream>时，必须在cin中指明数制，
//	否则从键盘输入时，不认八进制和十六进制数开头的0和0x标志。
//	指明后可省略0和0x标志。
//	进制控制只适用于整型变量，不适用于实型和字符型变量。
//	输入数据的格式、个数和类型必须与cin中的变量一一对应，
//	否则不仅使输入数据错误，而且影响后面其他数据的正确输入。
//	在cin或cout中指明数制后，该数制将一直有效，直到重新指明使用其他数制。
}
