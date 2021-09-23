/*03.Çø·Öa[0] &a &a[0] a*/
#include <iostream>
using namespace std;

int main() {
	int a[5] = {1, 2, 3, 4, 5,};
	int *p = (int *)(&a + 1);
	printf("%d,%d,%d", *(a + 1), * (p - 1), p);

	return 0;
}
