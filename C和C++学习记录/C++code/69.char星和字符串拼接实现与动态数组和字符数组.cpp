/*69.char*���ַ���ƴ��ʵ���붯̬������ַ�����*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//char *strcat(char *dest, const char *src)����ԭ��
	char *ch1 = "dwdw";
	char *ch2 = "fef";
	char *p = new char[strlen(ch1) + strlen(ch2) + 1];
	//���char *ָ�������ַ�����
	//�ַ�����char c[20]={'s','d'};char *t=c��������������ַ�ָ�붼����������ַ���
	cout << "ch1:" << ch1 << " " << "ch2:" << ch2 << endl;

	//����������������������Ԫ�ص�ַ���������ָ��Ҳ��
	int num[5] = {1, 5, 6, 4};
	int *pn = num;
	cout << "num:" << num << endl;
	cout << "pn:" << pn << endl;

	//char*�������ַ�������"abc"��ʼ����ֵ��Ҳ������char*��ʼ����ֵ
	char *ch1q = ch1 ;
	cout << "ch1q:" << ch1q << endl;
	ch1q = ch2;
	cout << "ch1q:" << ch1q << endl;
	ch1q = "a";
	cout << "ch1q:" << ch1q << endl;

	//strcat����ƴ�������ַ�����"abc","def"��char *.
//	strcat(ch1, ch2);
//	cout << ch1 << endl;

	//strcat����ƴ��һ���ַ������char *��һ���ַ�������char*
	char c[20] = {'a', 'b'};
	cout << "c[20]:" << c << endl;
	char *q = c;
	cout << "q:" << q << endl;
	strcat(q, ch2);
	cout << "q:" << q << endl;

	strcpy(p, ch1);
	//strcat����ƴ��һ����̬�����char *��һ���ַ�������char*
	strcat(p, ch2);
	//���char *��̬����ָ�������ַ�����
	cout << p << endl;



	char src[15], dest[20];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	strcat(dest, src);
	printf("���յ�Ŀ���ַ����� |%s|", dest);

	strcpy(dest, src);
	printf("\n���յ�Ŀ���ַ����� |%s|", dest);
	return 0;
}
