#include <stdio.h>
#include <math.h>

int isPrime(int);

int main() {

	for (int i = 2; i < 10000; i++) {
		if (isPrime(i)) {
			printf("%d\t", i);
		}
	}

	return 0;

}

int isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i==0) {
			return 0;
		}
	}
	return 1;
}