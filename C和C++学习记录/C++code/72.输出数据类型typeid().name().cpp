/*72.�����������*/
#include <iostream>
using namespace std;

int main() {
	string s = "dwd";
	string t = "rgrg" + s;
	string u = s + "oonf";
	cout << s << " " << t << " " << u << endl;
	cout << typeid("rgrg").name() << endl;
	cout << typeid("jkijluwygdq").name() << endl;
	cout << typeid(s).name() << endl;
	cout << typeid(t).name() << endl;
	cout << typeid(u).name() << endl;

	//char *,"�ַ�������",�Ƚϵ���ָ�룬"�ַ�������"������char *ָ�룻
	//string ���� string*�� char* ����"�ַ�������" ֮��Ƚϵ��� ���ݣ�
	//char* ����"�ַ�������"����Զ�ת��Ϊstring��
	//
	//char * ��"�ַ�������"
	char *dc = "ewf";
	string st = "ewf";
	cout << typeid(dc).name() << endl;
	cout << ("ewf" == "ewf") << endl;
	cout << (dc == "ewf") << endl;
	cout << dc[0] << endl;
	cout << dc[1] << endl;
	cout << dc << endl;

	// string s="dwd";s=="wfw";
	//string��"wfw"֮���==��Ȼ��string���غ��==��
	//���ԱȽ�һ��string���ַ������泣����
	//"wfw"���Զ�ת��Ϊstring
	cout << (dc == st) << endl;//����ָ������ݱȽ�
	cout << (st == "ewf") << endl;
	return 0;
}
