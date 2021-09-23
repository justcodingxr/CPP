/*71.allocator*/
#include <memory>
#include <iostream>
using namespace std;
allocator


//		ͷ�ļ�memory�ж��壬���ڷ���ԭʼ�ڴ棬���÷����ڴ��빹�����ָ�
//		����
//			allocator<string> a;
//		�����ڴ�
//			auto const p=a.allocate(n);
//		��ʼ��
//			auto q=p;
//			a.construct(q++);
//			a.construct(q++,10,'c');
//			a.construct(q++,"hi");
//		���ٶ���
//			while(q!=p){
//				a.destory(--q);
//				}
//		�ͷ��ڴ�
//			a.deallocate(p,n);
//
int main() {
	allocator<string> a;
	auto p = a.allocate(100);
	auto q = p;

	string s;
	cout << "�����ַ�����" << endl;
	while (cin >> s) {
		a.construct(q++, s);
		if (getchar() == '\n')
			break;
	}

	for (auto it = p; it != q; it++) {
		cout << *it << " ";
	}

	while (q != p) {
		a.destroy(q);
		q--;
	}
	a.deallocate(p, 100);
	return 0;
}
