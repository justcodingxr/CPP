
/*
19.cin��getline ������ȡ��ѭ����ȡ������
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> v;
	string s;
	char c = 'y';


//	while (cin >> s) {
//		v.push_back(s);//�����ո񣬴˴�>>����
//
//		//����������Զ�޷�ֹ��
//		if (getchar() == '\n')//getchar()���ջ�����Ϊ������־
//			break;
//	}



	while (getline(cin, s)) {
		v.push_back(s);
		//cin��������ǿո�getline������ǻ��С�
		//cin��getlineѭ����ȡ�����ǵ��ļ���β���쳣Ϊֹ��������������
		//cin ��getchar()���ջ�����Ϊ������־
		//��Ϊֱ�ӻ���getline���ǿ��ַ������Դ�Ϊ����
		if (*(v.end() - 1) == "" )
			break;
	}

	for (auto it = v.end() - 1; it != v.begin() - 1 ; it--) {
		cout << *it << endl;
	}
	return 0;
}
