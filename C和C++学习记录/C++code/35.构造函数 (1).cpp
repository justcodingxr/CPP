/*构造函数*
2021-09-15 23:16
*/

#include <iostream>
using namespace std;



//构造函数
//	构造函数名()=default;
//	构造函数名（形参列表，可不全）：初始值列表（可选）{ 函数体，可以空，可以类外定义}；
class Sale_data {
	public:
		Sale_data() = default;
		Sale_data(string &s): bookno(s) {	};

		Sale_data(const string &s, const unsigned n,
		          const double rep, const double crrp); //为什么都加const
		Sale_data(istream &is);

	public:
		string bookno;//string自带初始化参数
		unsigned num_sold = 0; //unsigned可以单独表示无符号整数
		double preprice = 0.0; //原价
		double currprice = 0.0; //现价
		double discount = 0.0; //折扣

};

Sale_data::Sale_data(const string &s, const unsigned n,

                     const double rep, const double crrp ) {
	bookno = s;
	num_sold = n;
	preprice = rep;
	currprice = crrp;
	if (preprice != 0) {
		discount = currprice / preprice;
	}
}

Sale_data::Sale_data(istream &s) {
//	s >> (*this).bookno;
	s >> (*this).bookno >> (*this).currprice  >> (*this).preprice >> (*this).num_sold
	  ;

}


int main() {
	cout << "输入编号，现价，原价，数量：" << endl;
	Sale_data obj(cin);
	cout << obj.bookno << " " << obj.currprice
	     << " " << obj.num_sold << " "
	     << obj.preprice << " " << obj.currprice / obj.preprice;


	return 0;
}


