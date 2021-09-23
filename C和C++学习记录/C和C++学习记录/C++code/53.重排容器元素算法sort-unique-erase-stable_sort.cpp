/*53.��������Ԫ���㷨sort-unique-erase*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
using namespace std;

//��������
bool compare(string &a, string &b) {
	return a < b; //�������У������Ϊreturn a>b����Ϊ����
}

bool samelen(const string &a, const string &b) {
	bool bl = false;
	if (a.size() < b.size())
		bl = true;
	return bl;
}

int main() {

	vector<string> li;
	string s;
	auto it1 = li.begin();
	cout << "����һЩ�ַ�����" << endl;
	while (cin >> s) {
		it1 = li.insert(it1, s);
		if (getchar() == '\n')
			break;
	}

	cout << "�ַ�������:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}
	cout << endl << endl;



	//sort����
	sort(li.begin(), li.end(), compare); //campare������Ϊ����������
	cout << "sort�ַ�������:" << endl;
	for (auto it = li.begin(); it != li.end(); it++) {
		cout << *it << " ";
	}
	cout << endl << endl;



	//unique
	auto it = unique(li.begin(), li.end());
	cout << "��Χfor���unique�ַ�������:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}
	cout << endl << endl;
	//Ϊʲô��������for��������
	//��Ϊunique��û������ɾ���ظ���Ԫ�أ�ֻ�ǽ�β������ָ���ظ�Ԫ�صĺ��棬
	//����ʵ����Ԫ�صģ�������ʽ���޷���ӡ���������ӡ���棬��end()���ֵ�������һ��
	cout << "for���unique�ַ�������:" << endl;
	for (auto it1 = li.begin(); it1 != li.end(); it1++) {
		cout << *it1 << " ";
	}
	cout << endl << endl;




	//eraseɾ�������ظ���Ԫ�أ�������ʽ�ϲ��ܴ�ӡ��
	li.erase(it, li.end());//it��unique���صġ�β���������
	cout << "erase��for����ַ�������:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}
	cout << endl << endl;


	//����ĳ��������ǰ�ᣬ�ٰ��ֵ�����
	stable_sort(li.begin(), li.end(), samelen);
	cout << "stable_sort��for����ַ�������:" << endl;
	for (auto s : li) {
		cout << s << " ";
	}
	cout << endl << endl;
	return 0;
}