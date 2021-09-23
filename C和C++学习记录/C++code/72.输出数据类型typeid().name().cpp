/*72.输出数据类型*/
#include <iostream>
using namespace std;

int main() {
	string s = "dwd";
	string t = "rgrg" + s;
	string u = s + "oonf";
	cout << s << " " << t << " " << u << endl;
	cout << typeid("rgrg").name() << endl;
	cout << typeid("jkijluwygdq").name() << endl;
	cout << typeid(s).name() << endl;
	cout << typeid(t).name() << endl;
	cout << typeid(u).name() << endl;

	//char *,"字符串常量",比较的是指针，"字符串常量"本质是char *指针；
	//string 或者 string*与 char* 或者"字符串常量" 之间比较的是 内容，
	//char* 或者"字符串常量"会会自动转换为string；
	//
	//char * 和"字符串常量"
	char *dc = "ewf";
	string st = "ewf";
	cout << typeid(dc).name() << endl;
	cout << ("ewf" == "ewf") << endl;
	cout << (dc == "ewf") << endl;
	cout << dc[0] << endl;
	cout << dc[1] << endl;
	cout << dc << endl;

	// string s="dwd";s=="wfw";
	//string和"wfw"之间的==显然是string重载后的==，
	//可以比较一个string和字符串字面常量，
	//"wfw"会自动转换为string
	cout << (dc == st) << endl;//两个指针的内容比较
	cout << (st == "ewf") << endl;
	return 0;
}
