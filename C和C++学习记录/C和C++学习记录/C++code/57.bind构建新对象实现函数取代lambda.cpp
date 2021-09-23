/*57.bind�����¶���ʵ�ֺ���ȡ��lambda
2021-09-18 21:09
*/

#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <functional>
using namespace std;
//��������ȡ��lambda
bool lesslen(const string &a, const string &b) {
	return a.size() > b.size();
}

bool lessm(const string &a, int m) {
	return a.size() < m;
}


void biggies(vector<string> &v1, vector<string>::size_type m) {
	//���ֵ�������
	sort(v1.begin(), v1.end());
	cout << endl << "���ֵ�������" << endl;
	for (auto s : v1) {
		cout << s << " ";
	}
	cout << endl;


	//unique����eraseɾ���ظ�Ԫ��
	v1.erase(unique(v1.begin(), v1.end()), v1.end());
	cout << endl << "unique����eraseɾ���ظ�Ԫ��" << endl;
	for (auto s : v1) {
		cout << s << " ";
	}
	cout << endl;



	//�������������ֵ�������
//	stable_sort(v1.begin(), v1.end(), [](const string &a, const string &b) {
//		return a.size() > b.size();
//	});


//���庯����ȡ��lambda���õķ���
//������lambda����ֱ�ӻ�ȡ��Ԫ�صĲ��� �� ��㺯���ľֲ����� �붨��ĺ���
//ͨ��bind��Ϊһ���µ� ���ö�����ռλ������ ����lambda����ֱ�ӻ�ȡ��Ԫ�صĲ���
//bool lesslen(const string &a, const string &b) {
//	return a.size() > b.size();
//}
//	stable_sort(v1.begin(), v1.end(), bind(lesslen, std::placeholders::_1, std::placeholders::_2));
//std::placeholders::_1����const string &a,std::placeholders::_2����const string &b,�ֲ�����ֱ��д
	//�������������ֵ�������
	stable_sort(v1.begin(), v1.end(), bind(lesslen, std::placeholders::_1, std::placeholders::_2));
	cout << endl << "���ִ�С���������ֵ�������" << endl;
	for (auto s : v1) {
		cout << s << " ";
	}
	cout << endl;


//
//	//�ҳ���һ��С��3��Ԫ�أ����ص�����
//	auto it = find_if(v1.begin(), v1.end(), [m](const string &s) {
//		return s.size() < m;
//	}  );
//	cout << endl;

	//�ҳ���һ��С��3��Ԫ�أ����ص�����
	auto it = find_if(v1.begin(), v1.end(), bind(lessm, std::placeholders::_1, m) );
	cout << endl;


	//���һ���ж��ٸ�������Ԫ��
	cout << v1.end() - it << endl;
}



int main() {
	vector<string> v1;//�������󴫵ݸ���������
	cout << "�����ַ�����" << endl;
	string s;
	while (cin >> s) {
		v1.push_back(s);
		if (getchar() == '\n')
			break;
	}
	for (auto s : v1) {
		cout << s << " ";
	}
	cout << endl;

	vector<string>::size_type m = 3;
	biggies(v1, m);
	return 0;
}
