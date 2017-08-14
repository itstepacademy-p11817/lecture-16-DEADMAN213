#include <stdio.h>

int main(void) {
	int sides[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		printf("Input side length: ");
		scanf_s("%i", &sides[i]);
	}

	int perim = 0;
	for (int i = 0; i < 5; i++) {
		perim += sides[i];
	}
	printf("Perimetr: %d.\n", perim);

	return 0;
}