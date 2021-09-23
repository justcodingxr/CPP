/*73.IO���������Ա�ǳ�Ա���������
2021-09-21 18:12
*/
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;


class SaleData {
		friend ostream &operator<<(ostream &os, const SaleData &sd);
		friend istream &operator>(istream &is, SaleData &sd);
		friend SaleData operator-(const SaleData &a, const SaleData &b);

	public:
		SaleData() = default;
		SaleData(const string &s, const int n, const double d1, const double d2): no(s), num(n), price(d1), sumprice(d2) {	};
		SaleData &operator-=(const SaleData &b);
	private:
		string no;
		int num = 0;
		double price = 0.0;
		double sumprice = 0.0;

};


istream &operator>(istream &is, SaleData &sd) {
	is >> sd.no >> sd.num >> sd.price;
	if (is) { //һ���Լ���istream
		sd.sumprice = sd.num * sd.price;
	} else {
		sd = SaleData(); //Ĭ�Ϲ��캯��
	}
	return is;//����ĳ��������������
}

ostream &operator<<(ostream &os, const SaleData &sd) {
	os << sd.no << " " << sd.num << " " << sd.price << " " << sd.sumprice;
	return os;
}

SaleData &SaleData::operator-=(const SaleData &b) {//��Ա�����ⲿ���岻�ɼ���
	if (this->no == b.no) {
		this->num -= b.num;
		this->price -= b.price;
		this->sumprice -= b.sumprice;
	}
	return *this;

}

SaleData operator-(const SaleData &a, const SaleData &b) {
	SaleData temobj = a;
	temobj -= b; //�õĳ�Ա���ط�
	return temobj;

}


int main() {
	SaleData obj1;
	cout << "����no,num,price:" << endl;
	string s = "ling 20 8.0";
	istringstream in(s);
	//ifstream in("data.txt");
	cin > obj1;//��ֹ��cin��ͻ
	cout << "obj1:" << obj1 << endl;

	//SaleData obj2();ƥ�䲻�����ʵĹ��캯����Ĭ�Ϲ��캯����Ҫ��������
	//SaleData obj2������Ĭ�Ϲ��캯�����ȼ���SaleData obj2(string &,int,double,double){}������ʵ��;
	//������SaleData obj2()��
	SaleData obj2;
	cout << "����no,num,price:" << endl;
	cin > obj2;
	cout << "obj2" << obj2 << endl;

	SaleData obj3 = obj1 - obj2;
	cout << "obj3" << obj3 << endl;

	obj1 -= obj2;
	cout << "obj1" << obj1 << endl;

	return 0;
}

