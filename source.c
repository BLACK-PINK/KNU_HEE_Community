#include<stdio.h>
int main() {

	int a=2;
	int b=3;
	int swap;

	printf("a = %d, b = %d\n", a, b);

	swap = a;
	a = b;
	b = swap;

	printf("a = %d, b = %d", a, b);

	return 0;

}