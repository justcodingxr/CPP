#include <iostream>
using namespace std;

void swapno(int *pa, int *pb) { //ֵ�Ͷ��󶼲�����
	int *temp;
	temp = pa;
	pa = pb;
	pb = temp;

}

void swapobj(int *pa, int *pb) { //��������
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void swappoint(int *&pa, int *&pb) { //����ֵ������Ҳ�ύ��
	int *temp;
	temp = pa;
	pa = pb;
	pb = temp;
}

int main() {
	int a = 11, b = 22;
	cout << "a=11,b=22" << endl;
	int *pa = &a, *pb = &b;
	cout << "pa��ֵ��" << pa << ",pb��ֵ��" << pb << endl;
	cout << "paָ��Ķ���" << *pa << ",pbָ��Ķ���" << *pb << endl;
	cout << endl << "=======swapno(pa, pb)" << endl;

	swapno(pa, pb);
	cout << "pa��ֵ��" << pa << ",pb��ֵ��" << pb << endl;
	cout << "paָ��Ķ���" << *pa << ",pbָ��Ķ���" << *pb << endl;
	cout << endl << "=======swapobj(pa, pb)" << endl;

	swapobj(pa, pb);
	cout << "pa��ֵ��" << pa << ",pb��ֵ��" << pb << endl;
	cout << "paָ��Ķ���" << *pa << ",pbָ��Ķ���" << *pb << endl;
	cout << endl << "=======swappoint(pa, pb)" << endl;

	swappoint(pa, pb);
	cout << "pa��ֵ��" << pa << ",pb��ֵ��" << pb << endl;
	cout  << "paָ��Ķ���" << *pa << ",pbָ��Ķ���" << *pb << endl;
	return 0;
}
