/*40.��Χ��ֵ
2021-09-16 22:33
*/
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	vector<string> v1;
	list<char * > li = {"hello", "my", "brother"};

	//v1 = li;��������һ������ֱ�Ӹ�ֵ
	v1.assign(li.begin(), li.end());
	cout << "v1:" << v1.capacity() << " " << v1.size()
	     << " " << v1[0] << " " << v1[v1.size() - 1] << endl;
	v1 = {"hhh", "lll"};
	cout << "v1[0]:" << *(v1.begin()) << endl;
//	swap(v1, list);�������Ͳ�ͬ�޷�������swap���ı�ָ�룬���ã��������󶨵�Ԫ�أ�
	return 0;
}

