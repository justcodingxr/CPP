/*45. arr��ֵ��vector��list���ֱ�ɾ����żԪ��*/
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	int arr[] = {0, 1, 2, 3, 4, 5, 65, 7, 8, 9, 10, 11};
	vector<int> v1;


	int i = 0;
//	while (i < 12) {//����Ԫ�����θ�ֵ
//		v1.push_back(arr[i]);
//		i++;
//	}
//
//��assign�滻���ã�assign�����ڲ�ͬ�������ݵ�������Ԫ���滻
	v1.assign(arr, arr + 12);
	cout << "v1:" << endl;
	for (auto s : v1) {
		cout << s << " ";
	}


	list<int> li(v1.begin(), v1.end());//��Χ������ʼ������Ч��ֵ��
	//�����ڳ�ʼ����ֱ�ӿ������У�Ҫ����insert
	cout << endl << "li:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}

	auto it1 = li.begin();
	while ( it1 != li.end()) {
		//ע��list��������֧��<�����
		if (*it1 % 2 == 1)
			it1 = li.erase(it1); //�᷵����һ��λ�õ�����,�ǵø���it1
		else
			it1++;
	}
	cout << endl << "li2:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}


	auto it2 = v1.begin();
	while (it2 != v1.end()) {
		if (*it2 % 2 == 0)
			it2 = v1.erase(it2); //�᷵����һ��λ�õ�����
		else
			it2++;
	}
	cout << endl << "v2:" << endl;
	for (auto s : v1) {
		cout << s << " ";
	}


	return 0;
}
