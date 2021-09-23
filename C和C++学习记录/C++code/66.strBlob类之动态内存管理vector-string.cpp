/*66.strBlob��֮��̬�ڴ����vector<string>*/
#include <iostream>
#include <vector>
#include <memory>//���õ�����ָ��
#include <stdexcept>
#include <initializer_list>
using namespace std;
//initializer��detype��out_of_range(s);make_shared<T>(args);
class strBlob {
	public:
		strBblob();//�����εĹ��캯��
		strBlob(initializer_list<string> ilz);//��ͬ�ͼ���string��initializer<string> ilz�����

		//��ȡ��̬�ڴ�Ԫ�ظ������ȶ��嵥λ����
		typedef vector<string>::size_type size_type;
		size_type num() const {
			return psd->size();//��ָ̬�����vector��Ա����
		}

		//�пպ���
		bool empty() {
			return psd->empty();
		}

		//���Ԫ��
		void push_back(const string &s) { //ֻ��ͬ��������vector�ĳ�Ա����
			psd->push_back(s);
		}
		//ɾ��Ԫ��
		void pop_back() {
			//���пշ�,���Զ���һ��ͨ�õ��б�Խ������ĺ���
			check(0, "vectorΪ�գ��޷�ɾ��Ԫ��"); //��0�����п�
			psd->pop_back();
		}

		//����Ԫ��֮��һ����Ԫ�أ�ҲҪ�п�
		const string &front_get() const {
			check(0, "vectorû��Ԫ�ؿ��Է���");
			return psd->front();//��ȡvector��Ԫ��
		}

		//����Ԫ��֮��һ��βԪ�أ�ҲҪ�п�
		string &back_get() {
			check(0, "vectorû��Ԫ�ؿ��Է���");
			return psd->back();
		}
	private:
		shared_ptr<vector<string>> psd;
		void check(size_type i, const string &s) const; //��ͬ�ķ�������ͨ��s�׳����Ե��쳣

};

void strBlob::check(size_type i, const string &s) const {
	if (i >= psd->size())
		throw out_of_range(s);
}

strBlob::strBlob(initializer_list<string> ilz): psd(make_shared < vector<string>>(ilz)) { };


int main() {
	//ʵ����
	strBlob obj1 = {"ling", "zhang", "wang"}; //initializer_list��ʽת��
	strBlob obj2 = obj1;
	cout << "����1Ԫ�ظ��� " << obj1.num() << " ��Ԫ�أ�"
	     << obj1.front_get() << " βԪ�أ�" << obj1.back_get()	<< endl;
	obj1.pop_back();
	cout <<  "����1pop_back��βԪ�أ�" << obj1.back_get() << endl;
	obj1.push_back("aaa");
	obj1.push_back("bbb");
	cout <<  "����1����Ԫ��aaa��bbb��" << endl;
	cout << "����1Ԫ�ظ��� " << obj1.num() << " βԪ�أ�" << obj1.back_get() << endl;


	cout << "����2Ԫ�ظ��� " << obj2.num() << " βԪ�أ�" << obj2.back_get() << endl;
	return 0;
}
