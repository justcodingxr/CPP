/*52.fill_n和back_inster*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> v1 = {2, 5, 6, 5, 4, 9};
	for (auto s : v1) {
		cout << s << " ";
	}

	fill_n(v1.begin(), 3, 0);//fill_n只接受一个目的迭代器，要求v1>=要替换的数目
	//如果就是超出，3改为10，后面不会替换，就会报错，直接中断；
	cout << endl;
	for (auto s : v1) {
		cout << s << " ";
	}

	fill_n(back_inserter(v1), 10, 0);//back_inster，调用的是push_back
	cout << endl;
	for (auto s : v1) {
		cout << s << " ";
	}

	return 0;
}
