/*04.switch*/
#include <iostream>
using namespace std;

int main() {
	int i;
	for (i = 0; i < 3; i++) {
		switch (i) {
			case 0:
				printf("%d", i);
			case 2:
				printf("%d", i);
			default:
				printf("%d", i);
		}
	}

	return 0;
}
