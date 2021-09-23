/*48.读入至少100字符给string*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	char c;
	string s;
	s.reserve(100);

	while (cin >> c) {
		s.push_back(c);
		if (getchar() == '\n')
			break;
	}

	cout << s << endl;
	return 0;
}
