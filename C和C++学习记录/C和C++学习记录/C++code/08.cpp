/*08随机数去重排序*/
/**题目描述
输入 N 个 1 到 1000 之间的随机整数
（N≤1000），对于其中重复的数字，只保留一个，
把其余相同的数去掉，不同的数对应着不同的学生的学号。
然后再把这些数
从小到大排序，按照排好的顺序去找同学做调查。
请你协助明明完成“去重”与“排序”的工作。*/
#include <iostream>
using namespace std;

int main() {
	int b[9];
	for (int j = 0; j < 9; j++)
		cout << b[j] << endl;
//可见初始化后，后面默认为0；
	int a[9] = {0};
	for (int i = 0; i < 9; i++)
		cout << a[i] << endl;

	cout << endl;
	cout << "输入N：" << endl;
	int n;
	cin >> n;
	int arr[1001] = {0};
	while (n < 1001 && n > 0) {
		for (; n != 0; n--) {
			cout << "输入整数：" << endl;
			int m = 0;
			cin >> m;
			arr[m] = 1; //数组下标默认升序且不重复
		}
	}

	for (int i = 0; i < 1001; i++) {
		if (arr[i] != 0)
			cout << i << endl;//输出下标
	}

	return 0;
}
