/*31. �����������ͱ߽�����
2021-09-14 17:20
*/
#include <iostream>
using namespace std;

//������Ϊ�����βΣ�������ѡ��ʽ��һ������Ϊָ�룬��������Ϊ���޶����ȵ�ָ�룬�����޶�Ϊ���ȵ�����
//ʵ�������鴫�뺯��ʱ��ʵ���Զ�ת��Ϊָ����Ԫ�ص�ָ�룻���������βεķ�ʽ�ȼ�
//ֱ�ӽ�������д�뺯�����ü���
void f1(int *p) {
	cout << *p << " ";
	cout << *(p + 1) << " ";
	cout << *(p + 5) << endl;
}

void f2(int *p, int sz) {
	int i = 0;
	while (i != sz) {
		cout << *p++ << " ";
		i++;
	}
}

void f3(int *b, int *e) {//C++11 �������begin��end���ָ�룬end����ĩβԪ�غ����ַ��ָ��
	while (b != e) {
		cout << *b << " ";
		b++;
	}
}

void f4(int a[], int sz) {
	for (int i = 0; i < sz; i++) {
		cout << a[i] << " ";
	}
}

void f5(int a[5]) { //����ά�����ײ���Σ��,��������С��ʵ�ʣ����һ����
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
}

void f6(int a[15]) { //����ά�����ײ���Σ�գ�������������ʵ�ʣ��������δ����ֵ
	for (int i = 0; i < 15; i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	cout << "arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};" << endl;
	cout << endl << "======f1" << endl;
	f1(arr);


	cout << endl << "======f2" << endl;
	f2(arr, 6);//��������Ϊָ����

	cout << endl << "======f3" << endl;
	int *b = begin(arr), *e = end(arr);
	f3(b, e);//��������Ϊָ����


	cout << endl << "======f4" << endl;
	f4(arr, 10);

	cout << endl << "======f5" << endl;
	f5(arr);

	cout << endl << "======f6" << endl;
	f6(arr);
	return 0;
}

