#include <stdio.h>
#include <math.h>

#define SIZE 10000

int main() {

	int array[SIZE];

	// initialize values to 1
	for (int i = 2; i < SIZE; i++) {
		array[i] = 1;
	}

	// conduct sieve method
	for (int i = 2; i < sqrt(SIZE); i++) {
		int k = 2;
		int num = i*k;
		while (num < SIZE) {
			array[num] = 0;
			k++;
			num = i*k;
		}
	}

	// print results
	for (int i = 0; i < SIZE; i++) {
		if (array[i]) {
			printf("%d\t", i);
		}
	}

}

/*
		int k = 2;
		int num = i*k;
		while (num < SIZE) {
			array[num] = 0;
			k++;
			num = i*k;
		}
*/