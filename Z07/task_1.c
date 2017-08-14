#include <math.h>
#include <stdio.h>
#include <new.h>
#include <stdbool.h>
#include "task_1.h"

void indexes(int a[], int b[], int c[]) {
	int lena = a[0];
	int lenb = b[0];
	int curpos = 1;
	bool minus = true;
	int ind = 1;
	
	
	while (curpos + lenb - 1 <= lena) {
		bool flag = true;

		for (int i = 0; i < lenb; i++) {
			if (b[i + 1] != a[curpos + i]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			c[ind++] = curpos;
			minus = false;
		}
		curpos++;
	}

	if (minus) {
		c[0] = -1;
	}
	else {
		c[0] = ind - 1;
	}
}
