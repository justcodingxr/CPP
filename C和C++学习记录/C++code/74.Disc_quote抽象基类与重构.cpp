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

		virtual double net_price(int n) {//�麯����Ҳ�ǻ��࣬�����ǳ������
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

		virtual double net_price(int n) const = 0;//�д��麯������ζ�����ǳ������
		//�����Ƕ���ӿڣ�˵�����������Բ�����base���������м�̳����ӿڣ�
		//����ֱ�Ӵ������������󣬳�������������Ҫʵ�ִ��麯���������Լ��Ķ��帲�Ǵ��麯����
		//����������Լ��Ķ��壬�����������д��麯���ĳ�����ࡣ


	protected:
		int quantity = 0;
		double discount = 0.0;
};



class Bulk_quote: public Disc_quote {
	public:
		Bulk_quote() = default;
		//��ʹû���Լ���������ݳ�Ա�����캯����Ȼ��Ҫ�ṩ�ĸ�����
		Bulk_quote(const string &book, double price, int qty, double disc):
			Disc_quote(book, price, qty, disc) {

		}

		double net_price(int n) const override;//������Զ����Լ����ۿ۲���
};

class Bulk_quote1: public Disc_quote {//�ع�
	public:
		Bulk_quote1() = default;
		//��ʹû���Լ���������ݳ�Ա�����캯����Ȼ��Ҫ�ṩ�ĸ�����
		Bulk_quote1(const string &book, double price, int qty, double disc):
			Disc_quote(book, price, qty, disc) {

		}

		double net_price(int n) const override {
			//������Զ����Լ����ۿ۲���
		};
};

class Bulk_quote2: public Disc_quote {//�ع�
	public:
		Bulk_quote2() = default;
		//��ʹû���Լ���������ݳ�Ա�����캯����Ȼ��Ҫ�ṩ�ĸ�����
		Bulk_quote2(const string &book, double price, int qty, double disc):
			Disc_quote(book, price, qty, disc) {

		}

		double net_price(int n) const override {
			//������Զ����Լ����ۿ۲���
		}
};

int main() {
	//Disc_quote d1;������಻��ʵ����
	//main��������㣬���cpp������main
	return 0;
}


















