/*20--�ο�18.���ӵ����������
��Ŀ����
��һ��Ӣ������Ե���Ϊ��λ�����ŷš����硰I am a boy����
�����ŷź�Ϊ��boy a am I��
���е���֮����һ���ո����������г���Ӣ����ĸ�⣬
���ٰ��������ַ���������־��
*/
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

//��ջ����ʵ��
int main() {
	//����2-ʵ�֣���Ȼ�ص����ƶ�ջ��
	stack<string> v;//����һ����ջ����
	string s;
	cout << "����Ӣ�" << endl;
	while (cin >> s) {
		v.push(s);
		if (getchar() == '\n') {
			break;
		}
	}
	while (!v.empty()) {
		cout << v.top() << " "; //���ջ��Ԫ��
		v.pop();//��ջ
	}

	return 0;
}