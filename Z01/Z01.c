#include <stdio.h>

int main(void) {
	int size = 5;
	int mas[5] = {1, 2, 3, 4, 5};
	printf("Mas: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", mas[i]);
	}

	printf("\nBackwards mas: ");
	for (int i = size - 1; i >= 0; i--) {
		printf("%d ", mas[i]);
	}
	printf("\n");

	return 0;
}