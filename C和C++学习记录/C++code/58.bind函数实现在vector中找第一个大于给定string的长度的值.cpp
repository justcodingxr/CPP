/*58.bind����ʵ����vector<int>���ҵ�һ�����ڸ���string�ĳ��ȵ�ֵ
2021-09-18 21:36
*/
#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//�ȽϺ���
bool func(int m, string &s) {
	return m > s.size();
}

void findvalue(vector<int> &v1, string &s) {
	auto it = find_if(v1.begin(), v1.end(), bind(func, std::placeholders::_1, s));
	cout << *it << endl;

}

int main() {
	cout << "����һ��������" << endl;
	int k;
	vector<int> v1;
	while (cin >> k) {
		v1.push_back(k);
		if (getchar() == '\n')
			break;
	}
	cout << "�����ַ�����" << endl;
	string s;
	cin >> s;

	findvalue(v1, s);

	return 0;
}
