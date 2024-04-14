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

	printf("All tests passed.");

	return 0;
}

