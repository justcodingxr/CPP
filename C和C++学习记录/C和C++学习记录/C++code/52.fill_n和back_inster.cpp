/*52.fill_n��back_inster*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> v1 = {2, 5, 6, 5, 4, 9};
	for (auto s : v1) {
		cout << s << " ";
	}

	fill_n(v1.begin(), 3, 0);//fill_nֻ����һ��Ŀ�ĵ�������Ҫ��v1>=Ҫ�滻����Ŀ
	//������ǳ�����3��Ϊ10�����治���滻���ͻᱨ��ֱ���жϣ�
	cout << endl;
	for (auto s : v1) {
		cout << s << " ";
	}

	fill_n(back_inserter(v1), 10, 0);//back_inster�����õ���push_back
	cout << endl;
	for (auto s : v1) {
		cout << s << " ";
	}

	return 0;
}
