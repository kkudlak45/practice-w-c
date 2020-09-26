#include <stdio.h>

float PI = 3.142;
float area(float);

int main() {
	float r1,r2;

	printf("\nInput radius 1:\n");
	scanf("%f", &r1);

	printf("\nInput radius 2:\n");
	scanf("%f", &r2);

	float A = area(r1) - area(r2);

	if (A < 0) { A*=-1; }
	printf("\nThe area between the two circles is %f\n", A);

	return 0;
}

float area(float r) {
	return PI*r*r/4;
}