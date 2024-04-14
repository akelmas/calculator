#include "math.h"

#include <assert.h>
#include <stdio.h>

int main(int argc, char** argv){
	/* Test Sum */
	assert(sum(4, 5) == 9);

	/* Test Sub */
	assert(sub(7, 8) == -1);

	/* Test Mul */
	assert(mul(6, 7) == 42);

	/* Test Div */
	assert(div(8, 4) == 2);
	assert(div(6, 8) == 0.75);

	/* Test pow */
	assert(pow(2, 3) == 8);
	assert(pow(3, 0) == 1);
	assert(pow(-8, 1) == -8);
	assert(pow(4, -1) == 0.25);
	assert(pow(1, 435) == 1);
	assert(pow(1, 4435) == 1);

	printf("All tests passed.");

	return 0;
}

