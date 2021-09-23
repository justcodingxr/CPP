/*65.���������front_inserter,back_inserter,inserter
*/
#include <iostream>
using namespace std;

#include <iterator>
#include <list>
#include <iostream>

using namespace std;
//insert�Ͳ����������insert��һ������������
//���������front_inserter,back_inserter,inserter���ڹ��������
//front_inserter,back_inserter������һ����������,���ص�����������Ԫ�صĵ�����
//inserter�����������������ڶ���ָ�������������λ�ã��������
void listprint(list<int> lst) {
	if (lst.empty())
		return;
	while (!lst.empty()) {
		cout << lst.front() << " ";
		lst.pop_front();
	}
	cout << endl;
}

int main() {
	list<int> lst = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	list<int> lst2 = { 10 }, lst3 = { 10 }, lst4 = { 10 };

	copy(lst.cbegin(), lst.cend(), back_inserter(lst2));
	//lst2����10,1,2,3,4,5,6,7,8,9
	listprint(lst2);

	copy(lst.cbegin(), lst.cend(), inserter(lst3, lst3.begin()));
	//lst3����1,2,3,4,5,6,7,8,9,10
	listprint(lst3);

	copy(lst.cbegin(), lst.cend(), front_inserter(lst4));
	//lst4����9,8,7,6,5,4,3,2,1,10
	listprint(lst4);
	return 0;
}