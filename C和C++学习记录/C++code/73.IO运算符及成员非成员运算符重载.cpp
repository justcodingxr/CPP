/*73.IO运算符及成员非成员运算符重载
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
	if (is) { //一次性检验istream
		sd.sumprice = sd.num * sd.price;
	} else {
		sd = SaleData(); //默认构造函数
	}
	return is;//返回某个输入里流对象
}

ostream &operator<<(ostream &os, const SaleData &sd) {
	os << sd.no << " " << sd.num << " " << sd.price << " " << sd.sumprice;
	return os;
}

SaleData &SaleData::operator-=(const SaleData &b) {//成员重载外部定义不可见名
	if (this->no == b.no) {
		this->num -= b.num;
		this->price -= b.price;
		this->sumprice -= b.sumprice;
	}
	return *this;

}

SaleData operator-(const SaleData &a, const SaleData &b) {
	SaleData temobj = a;
	temobj -= b; //用的成员重载符
	return temobj;

}


int main() {
	SaleData obj1;
	cout << "输入no,num,price:" << endl;
	string s = "ling 20 8.0";
	istringstream in(s);
	//ifstream in("data.txt");
	cin > obj1;//防止与cin冲突
	cout << "obj1:" << obj1 << endl;

	//SaleData obj2();相当于声明了一个返回SakeData的函数，匹配不到合适的构造函数，默认构造函数是无法显示调用的，或者等价于给出所有实参
	//SaleData obj2；调用默认构造函数，等价于SaleData obj2(string &,int,double,double){}有所有实参;
	//而不是SaleData obj2()；
	SaleData obj2;
	cout << "输入no,num,price:" << endl;
	cin > obj2;
	cout << "obj2" << obj2 << endl;

	SaleData obj3 = obj1 - obj2;
	cout << "obj3" << obj3 << endl;

	obj1 -= obj2;
	cout << "obj1" << obj1 << endl;

	return 0;
}

