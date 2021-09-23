#include <iostream>
using namespace std;

int main() {
	cout << "类型 " << "      所占空间" << endl;
	cout << "char " << "      " << sizeof(char) << endl;
	cout << "bool " << "      " << sizeof(bool) << endl;
	cout << "wchar" << "      " << sizeof(wchar_t) << endl;
	cout << "short" << "      " << sizeof(short) << endl;
	cout << "int  " << "      " << sizeof(int) << endl;
	cout << "long " << "      " << sizeof(long) << endl;
	cout << "long long" << "  " << sizeof(long long) << endl;
	cout << "float" << "      " << sizeof(float) << endl;
	cout << "double" << "     " << sizeof(double) << endl;
	cout << "long double" << "" << sizeof(long double) << endl;
	return 0;
}
