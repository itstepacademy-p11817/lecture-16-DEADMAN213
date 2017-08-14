#include <stdio.h>

int main(void) {
	int size = 5;
	int oldsize = size;
	int mas[5] = { 0, 5, 6, 0, 2 };
	
	for (int i = 0; i < size; i++) {
		printf("%i", mas[i]);
	}
	printf("\n");
	
	for (int i = 0; i < size; i++) {
		if (mas[i] == 0) {
			for (int j = i; j < size - 1; j++) {
				mas[j] = mas[j + 1];
			}
			mas[size - 1] = -1;
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%i", mas[i]);
	}
	printf("\n");

	return 0;
}