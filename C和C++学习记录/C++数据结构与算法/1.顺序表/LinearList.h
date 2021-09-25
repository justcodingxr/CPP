#include <iostream>
using namespace std;
template <typename T>//��class��typename����T����ĳ��Ԫ������
class LinearList {
private:
	int m_length;//��ǰԪ�ظ���
	int m_MaxSize;
	T *element;//��̬�����һ��Ԫ�����͵�ָ��
public:
	LinearList(int Maxsize);//���캯��������
	~LinearList();//��������ɾ����
	//��k��Ԫ�ز���Ԫ��x
	LinearList<T> &insert(int k, const T &x); //����LinearList<T> &��ģ�����͵�����,
	bool isEmpty() const;//�п�
	int getLength() const;//����Ԫ�ظ���
	bool getData(int k, T &x) const; //��k��Ԫ�ش���x�������ڷ���false
	bool modifyData(int k, const T &x); //�޸�Ԫ��
	int find(const T &x);//����Ԫ��xλ�ò�����
	LinearList<T> &deleteByindex(int k);
	//ɾ��Ԫ�أ�����LinearList<T>&����
	LinearList<T> &deleteByKey(const T &k, const T &y);
	//ɾ��Ԫ�أ�����LinearList<T>&����
	void output(ostream &out) const;//���

};

//���캯��
template <typename T>
LinearList<T>::LinearList(int Maxsize) {
	m_MaxSize = Maxsize;
	m_length = 0;
	element = new T[m_MaxSize]; //elementָ����������һ��Ԫ��
}

//��������
template <typename T>
LinearList<T>::~LinearList() {
	delete[]element;//�ͷ��������[]element
}

//����Ԫ��
template <typename T>
LinearList<T>& LinearList<T>::insert(int k, const T &x) {
	//��һ��Ԫ�ص����һ��Ԫ�ص�λ�ÿ��Ա�����ȡ�����Ȳ�������Խ�磩
	if (k < 1 || k > m_length + 1) {
		cout << "Ԫ���±�Խ�磬��Ӳ���ʧ��" << endl;

	}
	else
	{
		if (m_length == m_MaxSize) { //����Ԫ�ظ���==���Ԫ�ظ���
			cout << "�����Ѿ��������ܲ���" << endl;
		}
		else
		{
			//������Ԫ�ص����һ��Ԫ��ȫ�����ƶ���ע�������±���Ԫ��λ��-1,Ҫ�Ӻ��濪ʼ�ƶ���ֹ����
			for (int i = m_length; i >= k; i--) { //����ֵ�������±��k��length
				element[i] = element[i - 1]; //[k-1,length-1] [k,length]
			}
			element[k - 1] = x; //ע�������±���Ԫ��λ��-1
			m_length++;
		}
	}
	return *this;
}

//�п�isEmpty() const
template <typename T>
bool LinearList<T>::isEmpty() const {
	return m_length == 0;
}

//����Ԫ�ظ���
template <typename T>
int LinearList<T>::getLength() const {
	return m_length;
}

//ȡԪ��
template <typename T>
bool LinearList<T>::getData(int k, T &x) const {
	if (k < 1 || k > m_length) {
		cout << "k���ڷ�Χ" << endl;
		return false;
	}
	else {
		x = element[k - 1]; //�±�=λ��-1
		return true;
	}
}

//�޸�Ԫ��
template <class T>
bool LinearList<T>::modifyData(int k, const T &x) {
	if (k < 1 || k > m_length) {
		cout << "k���ڷ�Χ" << endl;
		return false;
	}
	else {
		element[k - 1] = x; //�±�=λ��-1
		return true;
	}
}
//����
template <class T>

int LinearList<T>::find(const T &x) {
	for (int i = 0; i < m_length; i++) {
		if (element[i] == x)
			return i + 1;
	}
	return 0;//0λ���򲻴���
}

//ɾ��Ԫ��
template <typename T>
LinearList<T> &LinearList<T>::deleteByindex(int k) {
	if (k < 1 || k> m_length) {
		cout << "k���ڷ�Χ" << endl;
		return *this;
	}
	else {
		for (int i = k - 1; i <= m_length - 2; i++) {
			element[i] = element[i + 1]; //[k,length-1],[k-1,length-2],�ƶ�Ԫ��
		}
		m_length -= 1;
		return *this;
	}
}

//ɾ��
template <typename T>

LinearList<T> &LinearList<T>::deleteByKey(const T &x, const T &y) {
	int index = find(x);
	if (index != 0) {
		return deleteByindex(index, y); //ɾ��Ԫ�أ�����y
	}
	else {
		cout << "ɾ��ʧ��" << endl;
		return *this;
	}
}
//���,
template <typename T>
void LinearList<T>::output(ostream &os) const {
	for (int i = 0; i < m_length; i++) {
		os << element[i] << " ";
	}
}

//���������,ʹ���������<<���LinearList��ʹ���������so�������ں���oupput
template <typename T>
ostream& operator<<(ostream& ostr, const LinearList<T> &list) {
	list.output(ostr);
	return ostr;
}
