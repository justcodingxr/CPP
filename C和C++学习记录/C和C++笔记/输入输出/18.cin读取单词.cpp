/*18.���ӵ����������
��Ŀ����
��һ��Ӣ������Ե���Ϊ��λ�����ŷš����硰I am a boy����
�����ŷź�Ϊ��boy a am I��
���е���֮����һ���ո����������г���Ӣ����ĸ�⣬
���ٰ��������ַ���������־��
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//vector����ʵ��
int main() {
	vector<string> v;
	string s;
	char c = 'y';
	//cin��������ǿո�getline������ǻ��С�
	//cin��getlineѭ����ȡ�����ǵ��ļ���β���쳣Ϊֹ��������������

	while (cin >> s) {
		v.push_back(s);//�����ո񣬴˴�>>����

		//����������Զ�޷�ֹ��
		if (getchar() == '\n')//getchar()����cin���ӵĻ���enter��Ϊ������־
			break;
	}

	for (auto it = v.end() - 1; it != v.begin() - 1 ; it--) {
		cout << *it << " ";
	}
	return 0;
}


