#include <stdio.h>

int main() {

	float sides[] = {0, 0, 0};

	printf("a=%f  b=%f  c=%f", sides[0], sides[1], sides[2]);

	do {

		printf("\n\n//----Welcome to the triangle validation program----\\\\");
		printf("\n    Type the exit sentinel -1 at any time to exit\n");

		// sanitize and validate user input
		for (int i = 0; i < 3; i++) {

			do {

				printf("\nPlease input a value for side %d: ", i+1); // gather input from user
				scanf("%f", &sides[i]);

				if (sides[i] == -1) { return 0; } // exit sentinel
				if (sides[i] <= 0) { printf("Side lengths must be nonzero or positive\n"); } // give feedback if negative

			} while (sides[i] <= 0);

		}

		// process user input
		if    (sides[0] + sides[1] > sides[2]
			&& sides[1] + sides[2] > sides[0]
			&& sides[2] + sides[0] > sides[1]) {
			printf("\n\nTriangle with sides a=%f  b=%f  c=%f is possible\n", sides[0], sides[1], sides[2]);
		} else {
			printf("\n\nTriangle with sides a=%f  b=%f  c=%f is NOT possible\n", sides[0], sides[1], sides[2]);
		}

	} while (1);

}