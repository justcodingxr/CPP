/*���캯��*
2021-09-15 23:16
*/

#include <iostream>
using namespace std;



//���캯��
//	���캯����()=default;
//	���캯�������β��б��ɲ�ȫ������ʼֵ�б���ѡ��{ �����壬���Կգ��������ⶨ��}��
class Sale_data {
	public:
		Sale_data() = default;
		Sale_data(string &s): bookno(s) {	};

		Sale_data(const string &s, const unsigned n,
		          const double rep, const double crrp); //Ϊʲô����const
		Sale_data(istream &is);

	public:
		string bookno;//string�Դ���ʼ������
		unsigned num_sold = 0; //unsigned���Ե�����ʾ�޷�������
		double preprice = 0.0; //ԭ��
		double currprice = 0.0; //�ּ�
		double discount = 0.0; //�ۿ�

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
	cout << "�����ţ��ּۣ�ԭ�ۣ�������" << endl;
	Sale_data obj(cin);
	cout << obj.bookno << " " << obj.currprice
	     << " " << obj.num_sold << " "
	     << obj.preprice << " " << obj.currprice / obj.preprice;


	return 0;
}


