/*51.equal算法运算符==对c风格字符串和string的不同*/
#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	//char保存字符''；char*保存c风格字符串,char* c[]保存多个c风格数组
	char *c[] = {"aaa", "bbb", "www"}; //c风格字符串本质是char*
	char *p[] = {strdup(c[0]), strdup(c[1]), strdup(c[2])};
	char *q[] = {c[0], c[1], c[2]};

	cout << equal(begin(c), end(c), p) << endl; //p提供类型,strdup是拷贝字符串，
	//char*对==是比较地址，地址不一样
	cout << equal(begin(c), end(c), q) << endl; //q提供类型，q保存的就是原来的char*指针
	return 0;
}
