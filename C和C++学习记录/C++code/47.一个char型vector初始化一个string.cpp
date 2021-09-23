/*47.一个vector<char>初始化一个string*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<char> v1 = {'s', 'd', 'w', 'f', 'w', 'e', 'p', 'i'};
//	string s(v1);容器不相同

	string s(v1.begin(), v1.end());
	cout << s << endl;

//	string s2(v1.begin(), 8);//错误，迭代器不同与指针和data（）
//	cout << s2 << endl;

	char arr[] = {'a', 'e', 'd', 'w'};
	char *p = &arr[0];
	string s3(p, 4);//数组可以
	cout << s3 << endl;

	string s4(v1.data(), 8);//data()返回的才是内存地址
	cout << s4 << endl;
	return 0;
}
