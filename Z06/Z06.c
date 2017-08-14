#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int lena = 6;
	int lenb = 2;
	int curpos = 0;
	bool minus = true;
	int a[6] = { 1, 1, 0, 1, 1, 1 };
	int b[2] = { 1, 1 };

	while (curpos + lenb <= lena) {
		bool flag = true;

		for (int i = 0; i < lenb; i++) {
			if (b[i] != a[curpos + i]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			printf("%i.\n", curpos);
			minus = false;
		}
		curpos++;
	}

	if (minus) {
		printf("-1\n");
	}

	return 0;
}