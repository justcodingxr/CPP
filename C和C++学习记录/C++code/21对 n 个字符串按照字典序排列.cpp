/*21.��Ŀ����
���� n ���ַ�������� n ���ַ��������ֵ������С�
��������:
�����һ��Ϊһ�������� n(1��n��1000),���� n ��Ϊ n ���ַ���(�ַ������ȡ�100),�ַ�����ֻ���д�Сд��ĸ��
�������:
������� n �У�������Ϊ�����ֵ������е��ַ�����*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //���� sort ��������ӵ�ͷ�ļ���sortĬ���ֵ���
using namespace std;
int main() {
	int n;
	cout << "����n��";
	cout << "����n�������ʣ�";
	while (cin >> n) {
		/*������������ַ������η��뵽���� vs ��*/
		string str;
		vector<string> vs; //�������� vs
		while (n--) { //������룬���� for ѭ������һ��ѭ������
			cin >> str;
			vs.push_back(str); //���ַ��� str ���뵽���� vs ��
		}
		/*������ vs �е��ַ���������������*/
		sort(vs.begin(), vs.end());
		//������ vs ��Ԫ���������У���Ϊ vs ��Ԫ����Ӣ�ĵ��ʣ�sort ����Ĭ�ϵ���������ֵ���
		/*������ vs �е�Ԫ���������*/
		cout << "========" << endl;
		vector<string>::iterator vit; //��һ���ȶ���һ������������ vit
		for (vit = vs.begin(); vit != vs.end(); vit++)
			cout << *vit << endl;
	}
	return 0;
}






//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
////�Ƚ������ַ�����С������ֱ����s1>s2�ж�
//bool cmp(string &s1, string &s2) {
//	bool bl = true;
//	int i = 0;
//	while (i <= s1.size() && i <= s2.size()) {
//		if (s1[i] >= s2[i] ) {
//			bl = false;
//			break;
//		}
//		i++;
//	}
//	return bl;
//
//}
//
//int main() {
//
//	int n;
//	cout << "����n��" << endl;
//	cin >> n;
//	string s;
//	vector<string> v;
//	cout << "���뵥�ʣ�" << endl;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		v.push_back(s);
//	}
//	cout << "========" << endl;
//	for (auto it = v.begin(); it < v.end(); it++) {
//		for ( auto jt = v.begin(); jt < v.end() - 1; jt++) {
//			if (cmp(*jt, *(jt + 1))) {
//				string s;
//				//*it��ʾ����Ԫ�أ��Ҷ�*it��������ʵ�ı�����Ԫ��
//				//*p��ʾ��ַ��ֵ�������ԡ���
//				s = *(jt + 1);
//				*(jt + 1 ) = *jt;
//				*jt = s;
//			}
//
//		}
//	}
//	cout << "========" << endl;
//
//	for (auto &s : v) {
//		cout << s << endl;
//	}
//
//	return 0;
//}
