#include "cutest.h"
#include "task_1.h"

void test_index_1(void) {
	int etalon[4] = { 3, 1, 4, 5 };
	int a[7] = { 6, 1, 1, 0, 1, 1, 1 };
	int b[3] = { 2, 1, 1 };
	int c[20] = { 0 };

	indexes(a, b, c);

	for (int i = 0; i <= etalon[0]; i++) {
		TEST_CHECK(c[i] == etalon[i]);
	}
}

void test_index_2(void) {
	int a[2] = { 1, 1 };
	int b[3] = { 2, 1, 2 };
	int c[20] = { 0 };

	indexes(a, b, c);

	TEST_CHECK(c[0] == -1);
}

void test_index_3(void) {
	int etalon[2] = { 1, 2 };
	int a[7] = { 6, 1, 1, 7, 2, 1, 1 };
	int b[4] = { 3, 1, 7, 2 };
	int c[20] = { 0 };

	indexes(a, b, c);

	for (int i = 0; i <= etalon[0]; i++) {
		TEST_CHECK(c[i] == etalon[i]);
	}
}

void test_index_4(void) {
	int a[7] = { 6, 1, 1, 7, 2, 1, 1 };
	int b[4] = { 3, 1, 7, 6 };
	int c[20] = { 0 };

	indexes(a, b, c);

	TEST_CHECK(c[0] == -1);
}

void test_index_5(void) {
	int etalon[4] = { 3, 2, 9, 15 };
	int a[18] = { 17, 1, 1, 7, 2, 1, 1, 5, 7, 1, 7, 2, 4, 5, 9, 1, 7, 2 };
	int b[4] = { 3, 1, 7, 2 };
	int c[20] = { 0 };

	indexes(a, b, c);

	for (int i = 0; i <= etalon[0]; i++) {
		TEST_CHECK(c[i] == etalon[i]);
	}
}

TEST_LIST = {
        { "mas a = { 6, 1, 1, 0, 1, 1, 1 }; mas b = { 2, 1, 1 }; ",     test_index_1 },
        { "mas a = { 1, 1 }; mas b = { 2, 1, 2 }; ",      test_index_2 },
        { "mas a[7] = { 6, 1, 1, 7, 2, 1, 1 }; mas b = { 3, 1, 7, 2 }; ", test_index_3 },
        { "mas a = { 6, 1, 1, 7, 2, 1, 1 }; mas b = { 3, 1, 7, 6 }; ",  test_index_4 },
        { "mas a[18] = { 17, 1, 1, 7, 2, 1, 1, 5, 7, 1, 7, 2, 4, 5, 9, 1, 7, 2 }; mas b[4] = { 3, 1, 7, 2 }; ",  test_index_5 },
        { 0 }
};
