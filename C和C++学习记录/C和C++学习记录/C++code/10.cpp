/*10.C++如何输入多行字符串(含空格)
*/
/*getline(cin,string s) 可以读取整行包括空格，遇到换行结束，换行不会读入

*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s[3];
	int n;
	cin >> n;
	//cin输入数字，然后getline读取空，遇到换行；
//	getline再读取两次

	cout <<	getchar();//如果此处用getchar()会接收换行,getline则不能第一个换行，还可以接受三个字符串
	for (int i = 0; i < n; i++) {
		getline(cin, s[i]);
	}
	for (int i = 0; i < n; i++) {
		cout << s[i] << "size:" << s[i].size();
	}

	return 0;
}


