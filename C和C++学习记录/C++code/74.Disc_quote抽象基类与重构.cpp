#include <iostream>
using namespace std;

#include <iostream>
using namespace std;


class Quote {
	public:
		Quote() = default;
		Quote(const string &book, double price): bookNo(book), price(price) {
		}

		string &isbn() {
			return bookNo;
		}

		virtual double net_price(int n) {//虚函数，也是基类，但不是抽象基类
			return n * price;
		}

		virtual ~Quote() = default;

	private:
		string bookNo;
	protected:
		double price;
};



class Disc_quote: public Quote {
	public:
		Disc_quote() = default;
		Disc_quote(const std::string &book, double price, int qty, double disc ):
			Quote(book, price), quantity(qty), discount(disc) {
		}

		virtual double net_price(int n) const = 0;//有纯虚函数，意味着类是抽象基类
		//作用是定义接口，说明抽象基类可以不必是base，可以在中间继承做接口；
		//不能直接创建抽象基类对象，抽象基类的派生类要实现纯虚函数，给出自己的定义覆盖纯虚函数，
		//如果不给出自己的定义，则它依旧是有纯虚函数的抽象基类。


	protected:
		int quantity = 0;
		double discount = 0.0;
};



class Bulk_quote: public Disc_quote {
	public:
		Bulk_quote() = default;
		//即使没有自己定义的数据成员，构造函数仍然需要提供四个参数
		Bulk_quote(const string &book, double price, int qty, double disc):
			Disc_quote(book, price, qty, disc) {

		}

		double net_price(int n) const override;//这里可以定义自己的折扣策略
};

class Bulk_quote1: public Disc_quote {//重构
	public:
		Bulk_quote1() = default;
		//即使没有自己定义的数据成员，构造函数仍然需要提供四个参数
		Bulk_quote1(const string &book, double price, int qty, double disc):
			Disc_quote(book, price, qty, disc) {

		}

		double net_price(int n) const override {
			//这里可以定义自己的折扣策略
		};
};

class Bulk_quote2: public Disc_quote {//重构
	public:
		Bulk_quote2() = default;
		//即使没有自己定义的数据成员，构造函数仍然需要提供四个参数
		Bulk_quote2(const string &book, double price, int qty, double disc):
			Disc_quote(book, price, qty, disc) {

		}

		double net_price(int n) const override {
			//这里可以定义自己的折扣策略
		}
};

int main() {
	//Disc_quote d1;抽象基类不可实例化
	//main是运行起点，多个cpp不可少main
	return 0;
}


















