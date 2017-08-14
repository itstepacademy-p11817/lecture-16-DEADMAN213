#include <stdio.h>

int main(void) {
	int profit[12] = {0};
	for (int i = 0; i < 12; i++) {
		printf("Input profit for %i month: ", i + 1);
		scanf_s("%i", &profit[i]);
	}

	printf("Profits: ");
	for (int i = 0; i < 12; i++) {
		printf("%i ", profit[i]);
	}
	printf("\n");

	int max = profit[0];
	int indmax = 0;
	int min = profit[0];
	int indmin = 0;

	for (int i = 0; i < 11; i++) {
		if (max < profit[i + 1]) {
			max = profit[i + 1];
			indmax = i + 1;
		}
		if (min > profit[i + 1]) {
			min = profit[i + 1];
			indmin = i + 1;
		}
	}

	printf("Max profit %i in month %i.\n", max, indmax + 1);
	printf("Min profit %i in month %i.\n", min, indmin + 1);

	return 0;
}