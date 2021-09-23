/*71.allocator*/
#include <memory>
#include <iostream>
using namespace std;
allocator


//		头文件memory中定义，用于分配原始内存，可让分配内存与构造对象分割
//		定义
//			allocator<string> a;
//		分配内存
//			auto const p=a.allocate(n);
//		初始化
//			auto q=p;
//			a.construct(q++);
//			a.construct(q++,10,'c');
//			a.construct(q++,"hi");
//		销毁对象
//			while(q!=p){
//				a.destory(--q);
//				}
//		释放内存
//			a.deallocate(p,n);
//
int main() {
	allocator<string> a;
	auto p = a.allocate(100);
	auto q = p;

	string s;
	cout << "输入字符串：" << endl;
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
