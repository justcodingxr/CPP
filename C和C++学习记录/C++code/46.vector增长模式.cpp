/*46.vector����ģʽ*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1;
	int c;
//��i>size()ʱ���˳�,�ٵ���capacityʱ���·����С
//ע�⽫capacity����c�������䶯��ѭ���޷�����
	for (int i = v1.size(), c = v1.capacity(); i <= c; i++) {
		v1.push_back(6);
	}
	cout << "size():" << v1.size() << "   capacity()��" << v1.capacity() << endl;

	for (int i = v1.size(), c = v1.capacity(); i <= c; i++) {
		v1.push_back(6);
	}
	cout << "size():" << v1.size() << "   capacity()��" << v1.capacity() << endl;

	for (int i = v1.size(), c = v1.capacity(); i <= c; i++) {
		v1.push_back(6);
	}
	cout << "size():" << v1.size() << "   capacity()��" << v1.capacity() << endl;

	for (int i = v1.size() , c = v1.capacity(); i <= c; i++) {
		v1.push_back(6);
	}
	cout << "size():" << v1.size() << "   capacity()��" << v1.capacity() << endl;

	for (int i = v1.size() , c = v1.capacity(); i <= c; i++) {
		v1.push_back(6);
	}
	cout << "size():" << v1.size() << "   capacity()��" << v1.capacity() << endl;
	return 0;
}
