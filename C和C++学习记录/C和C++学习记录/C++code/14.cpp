/*14.四舍五入求整（需要滚瓜烂熟的 3 行程序）
题目描述
写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于 5,向上取整；小于 5，则向下取
整。
输入描述:
输入一个正浮点数值
输出描述:
输出该数值的近似整数值
示例 1
输入
5.5
输出
6
*/

#include <iostream>
using namespace std;
//方法一
#include <iostream>
using namespace std;

int main() {
	double m;
	cout << "输入正实数：";
	cin >> m;
	cout << (int)(m + 0.5) << endl;

	return 0;
}

//方法二
//int main() {
//	double m;
//	cout << "输入一个正实数：";
//	cin >> m;
//	int n;
//	//获取第一位小数
//	n = (int)(m * 10) % 10;
//	if (n < 5) {
//		//(int)将实数取整，会直接丢弃小数部分
//		cout << (int)m << endl;
//	} else {
//		cout << int(m) + 1;
//	}
//
//	return 0;
//}
