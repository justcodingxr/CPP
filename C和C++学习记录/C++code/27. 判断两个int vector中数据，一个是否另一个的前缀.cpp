/*27. �ж�����int vector�����ݣ�һ���Ƿ���һ����ǰ׺*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1 = {0, 1, 1, 2};
	vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};
	bool bl = true;
//	vector<int>::iterator it1;
//	vector<int>::iterator it2;
//begin()�����������ԣ����ǵ�������
	for (auto it1 = v1.begin(), it2 = v2.begin(); it1 != v1.end()
	        && it2 != v2.end(); it1++, it2++) {
		if (*it1 != *it2) {
			bl = false;
			break;
		}
	}
	cout << bl << endl;
	return 0;
}
