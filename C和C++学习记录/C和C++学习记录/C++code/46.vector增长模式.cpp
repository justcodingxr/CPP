/*46.vector增长模式*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1;
	int c;
//当i>size()时会退出,再调用capacity时会新分配大小
//注意将capacity赋予c，否则会变动，循环无法结束
	for (int i = v1.size(), c = v1.capacity(); i <= c; i++) {
		v1.push_back(6);
	}
	cout << "size():" << v1.size() << "   capacity()：" << v1.capacity() << endl;

	for (int i = v1.size(), c = v1.capacity(); i <= c; i++) {
		v1.push_back(6);
	}
	cout << "size():" << v1.size() << "   capacity()：" << v1.capacity() << endl;

	for (int i = v1.size(), c = v1.capacity(); i <= c; i++) {
		v1.push_back(6);
	}
	cout << "size():" << v1.size() << "   capacity()：" << v1.capacity() << endl;

	for (int i = v1.size() , c = v1.capacity(); i <= c; i++) {
		v1.push_back(6);
	}
	cout << "size():" << v1.size() << "   capacity()：" << v1.capacity() << endl;

	for (int i = v1.size() , c = v1.capacity(); i <= c; i++) {
		v1.push_back(6);
	}
	cout << "size():" << v1.size() << "   capacity()：" << v1.capacity() << endl;
	return 0;
}
