/*51.equal�㷨�����==��c����ַ�����string�Ĳ�ͬ*/
#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	//char�����ַ�''��char*����c����ַ���,char* c[]������c�������
	char *c[] = {"aaa", "bbb", "www"}; //c����ַ���������char*
	char *p[] = {strdup(c[0]), strdup(c[1]), strdup(c[2])};
	char *q[] = {c[0], c[1], c[2]};

	cout << equal(begin(c), end(c), p) << endl; //p�ṩ����,strdup�ǿ����ַ�����
	//char*��==�ǱȽϵ�ַ����ַ��һ��
	cout << equal(begin(c), end(c), q) << endl; //q�ṩ���ͣ�q����ľ���ԭ����char*ָ��
	return 0;
}
