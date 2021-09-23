/*02.字符数组字母小写转大写*/
#include <iostream>
using namespace std;

int main() {
	char ch[20] = "ada546wdFQdw2&w*";
	puts(ch);
	int j;
	for (j = 0; ch[j] != '\0'; j++) {
		if (ch[j] >= 'A' && ch[j] <= 'Z')
			ch[j] = ch[j] + 'a' - 'A';
	}
	puts(ch);

	return 0;
}
