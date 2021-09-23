/*66.strBlob类之动态内存管理vector<string>*/
#include <iostream>
#include <vector>
#include <memory>//会用到智能指针
#include <stdexcept>
#include <initializer_list>
using namespace std;
//initializer，detype，out_of_range(s);make_shared<T>(args);
class strBlob {
	public:
		strBblob();//不传参的构造函数
		strBlob(initializer_list<string> ilz);//传同型几个string，initializer<string> ilz更灵活

		//获取动态内存元素个数，先定义单位类型
		typedef vector<string>::size_type size_type;
		size_type num() const {
			return psd->size();//动态指针操作vector成员函数
		}

		//判空函数
		bool empty() {
			return psd->empty();
		}

		//添加元素
		void push_back(const string &s) { //只是同名，不是vector的成员函数
			psd->push_back(s);
		}
		//删除元素
		void pop_back() {
			//先判空否,可以定义一个通用的判别越界问题的函数
			check(0, "vector为空，无法删除元素"); //传0可以判空
			psd->pop_back();
		}

		//访问元素之第一个首元素，也要判空
		const string &front_get() const {
			check(0, "vector没有元素可以访问");
			return psd->front();//获取vector首元素
		}

		//访问元素之第一个尾元素，也要判空
		string &back_get() {
			check(0, "vector没有元素可以访问");
			return psd->back();
		}
	private:
		shared_ptr<vector<string>> psd;
		void check(size_type i, const string &s) const; //不同的方法调用通过s抛出各自的异常

};

void strBlob::check(size_type i, const string &s) const {
	if (i >= psd->size())
		throw out_of_range(s);
}

strBlob::strBlob(initializer_list<string> ilz): psd(make_shared < vector<string>>(ilz)) { };


int main() {
	//实例化
	strBlob obj1 = {"ling", "zhang", "wang"}; //initializer_list隐式转换
	strBlob obj2 = obj1;
	cout << "对象1元素个数 " << obj1.num() << " 首元素："
	     << obj1.front_get() << " 尾元素：" << obj1.back_get()	<< endl;
	obj1.pop_back();
	cout <<  "对象1pop_back后尾元素：" << obj1.back_get() << endl;
	obj1.push_back("aaa");
	obj1.push_back("bbb");
	cout <<  "对象1加入元素aaa和bbb：" << endl;
	cout << "对象1元素个数 " << obj1.num() << " 尾元素：" << obj1.back_get() << endl;


	cout << "对象2元素个数 " << obj2.num() << " 尾元素：" << obj2.back_get() << endl;
	return 0;
}
