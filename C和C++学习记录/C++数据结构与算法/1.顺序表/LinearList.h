#include <iostream>
using namespace std;
template <typename T>//用class和typename都行T代表某种元素类型
class LinearList {
private:
	int m_length;//当前元素个数
	int m_MaxSize;
	T *element;//动态数组第一个元素类型的指针
public:
	LinearList(int Maxsize);//构造函数创建表
	~LinearList();//析构函数删除表
	//第k个元素插入元素x
	LinearList<T> &insert(int k, const T &x); //返回LinearList<T> &类模板类型的引用,
	bool isEmpty() const;//判空
	int getLength() const;//返回元素个数
	bool getData(int k, T &x) const; //第k个元素存入x，不存在返回false
	bool modifyData(int k, const T &x); //修改元素
	int find(const T &x);//查找元素x位置并返回
	LinearList<T> &deleteByindex(int k);
	//删除元素，返回LinearList<T>&类型
	LinearList<T> &deleteByKey(const T &k, const T &y);
	//删除元素，返回LinearList<T>&类型
	void output(ostream &out) const;//输出

};

//构造函数
template <typename T>
LinearList<T>::LinearList(int Maxsize) {
	m_MaxSize = Maxsize;
	m_length = 0;
	element = new T[m_MaxSize]; //element指向数组对象第一个元素
}

//析构函数
template <typename T>
LinearList<T>::~LinearList() {
	delete[]element;//释放数组对象[]element
}

//插入元素
template <typename T>
LinearList<T>& LinearList<T>::insert(int k, const T &x) {
	//第一个元素到最后一个元素的位置可以被插入取代（先不管数组越界）
	if (k < 1 || k > m_length + 1) {
		cout << "元素下标越界，添加插入失败" << endl;

	}
	else
	{
		if (m_length == m_MaxSize) { //现有元素个数==最多元素个数
			cout << "数组已经满，不能插入" << endl;
		}
		else
		{
			//被插入元素到最后一个元素全部后移动，注意数组下标是元素位次-1,要从后面开始移动防止覆盖
			for (int i = m_length; i >= k; i--) { //被赋值的数组下标从k到length
				element[i] = element[i - 1]; //[k-1,length-1] [k,length]
			}
			element[k - 1] = x; //注意数组下标是元素位次-1
			m_length++;
		}
	}
	return *this;
}

//判空isEmpty() const
template <typename T>
bool LinearList<T>::isEmpty() const {
	return m_length == 0;
}

//返回元素个数
template <typename T>
int LinearList<T>::getLength() const {
	return m_length;
}

//取元素
template <typename T>
bool LinearList<T>::getData(int k, T &x) const {
	if (k < 1 || k > m_length) {
		cout << "k不在范围" << endl;
		return false;
	}
	else {
		x = element[k - 1]; //下标=位次-1
		return true;
	}
}

//修改元素
template <class T>
bool LinearList<T>::modifyData(int k, const T &x) {
	if (k < 1 || k > m_length) {
		cout << "k不在范围" << endl;
		return false;
	}
	else {
		element[k - 1] = x; //下标=位次-1
		return true;
	}
}
//查找
template <class T>

int LinearList<T>::find(const T &x) {
	for (int i = 0; i < m_length; i++) {
		if (element[i] == x)
			return i + 1;
	}
	return 0;//0位次则不存在
}

//删除元素
template <typename T>
LinearList<T> &LinearList<T>::deleteByindex(int k) {
	if (k < 1 || k> m_length) {
		cout << "k不在范围" << endl;
		return *this;
	}
	else {
		for (int i = k - 1; i <= m_length - 2; i++) {
			element[i] = element[i + 1]; //[k,length-1],[k-1,length-2],移动元素
		}
		m_length -= 1;
		return *this;
	}
}

//删除
template <typename T>

LinearList<T> &LinearList<T>::deleteByKey(const T &x, const T &y) {
	int index = find(x);
	if (index != 0) {
		return deleteByindex(index, y); //删除元素，存入y
	}
	else {
		cout << "删除失败" << endl;
		return *this;
	}
}
//输出,
template <typename T>
void LinearList<T>::output(ostream &os) const {
	for (int i = 0; i < m_length; i++) {
		os << element[i] << " ";
	}
}

//重载运算符,使得类外可用<<输出LinearList；使得类外参数so传至类内函数oupput
template <typename T>
ostream& operator<<(ostream& ostr, const LinearList<T> &list) {
	list.output(ostr);
	return ostr;
}
