#include "math.h"

#include <CUnit/Basic.h>

static void test_math(void){
	/* Test Sum */
	CU_ASSERT(sum(4, 5) == 9);

	/* Test Sub */
	CU_ASSERT(sub(7, 8) == -1);

	/* Test Mul */
	CU_ASSERT(mul(6, 7) == 42);

	/* Test Div */
	CU_ASSERT(div(8, 4) == 2);
	CU_ASSERT(div(6, 8) == 0.75);

	/* Test power */
	CU_ASSERT(power(2, 3) == 8);
	CU_ASSERT(power(3, 0) == 1);
	CU_ASSERT(power(-8, 1) == -8);
	CU_ASSERT(power(4, -1) == 0.25);
	CU_ASSERT(power(1, 435) == 1);
	CU_ASSERT(power(1, 4435) == 1);

	CU_PASS("All tests passed.");
}

int main(int argc, char** argv){
	CU_initialize_registry();
	CU_pSuite pSuite = CU_add_suite("test-math", 0, 0);
	CU_add_test(pSuite,"math", test_math);
	CU_basic_run_tests();
	return 0;
}

