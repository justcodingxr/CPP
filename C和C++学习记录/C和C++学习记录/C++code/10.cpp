/*10.C++�����������ַ���(���ո�)
*/
/*getline(cin,string s) ���Զ�ȡ���а����ո��������н��������в������

*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s[3];
	int n;
	cin >> n;
	//cin�������֣�Ȼ��getline��ȡ�գ��������У�
//	getline�ٶ�ȡ����

	cout <<	getchar();//����˴���getchar()����ջ���,getline���ܵ�һ�����У������Խ��������ַ���
	for (int i = 0; i < n; i++) {
		getline(cin, s[i]);
	}
	for (int i = 0; i < n; i++) {
		cout << s[i] << "size:" << s[i].size();
	}

	return 0;
}


