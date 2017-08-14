#include <stdio.h>

int main(void) {
	int size = 13;
	int oldsize = size;
	int mas[100] = { 0, 5, 0, 6, 0, 2, 7, 0, 0, 0, 7, 1, 0 };
	
	for (int i = 0; i < size; i++) {
		printf("%i", mas[i]);
	}
	printf("\n");
	
	for (int i = 0; i < size; i++) {
		if (mas[i] == 0) {
			int num = 0;
			int k = i;
			while (mas[k++] == 0) {
				num++;
			}

			for (int j = i; j < size - num; j++) {
				mas[j] = mas[j + num];
			}
			for (int j = 0; j < num; j++) {
				mas[size - 1 - j] = -1;
			}
			
			size -= num;
		}
	}

	for (int i = 0; i < oldsize; i++) {
		printf("%i", mas[i]);
	}
	printf("\n");

	return 0;
}