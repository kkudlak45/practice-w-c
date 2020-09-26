#include <stdio.h>

int power(int, int);

int main() {
	int x, y;

	// get input
	printf("Input a value for x:\n");
	scanf("%d", &x);
	do {
		printf("Input a value for y:\n");
		scanf("%d", &y);
	} while (y<0); // ensure that y>=0
	printf("x^y=%d\n", power(x,y)); // print result after function call

	return 0;
}

/*
* power(int x, int y)
* x: the base
* y: the power x is raised to
* performs the operation x^y
*/
int power(int x, int y) {
	if (y <= 0)
		return 1;
	return x * power(x, y-1);
}