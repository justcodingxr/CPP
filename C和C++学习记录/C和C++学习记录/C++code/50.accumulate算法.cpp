/*50.accumulate算法*/
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
	vector<int> v1 = {2, 6, 5, 4};
	int sum = accumulate(v1.begin(), v1.end(), 0);
	cout << sum << endl;

	vector<char> v2(10, 'c');
	int s = accumulate(v2.begin(), v2.end(), 'c');
	cout << s << endl;

	vector<double> v3 = {2.5, 6.5, 5.1, 44.4};
	cout << accumulate(v3.begin(), v3.end(), 0.0) << endl;//输入0的话会截断各个
	return 0;
}
