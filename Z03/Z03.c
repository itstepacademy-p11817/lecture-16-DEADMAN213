#include <stdio.h>

int main(void) {
	int profit[19] = { 0 };
	int months = 0;
	printf("Input months: ");
	scanf_s("%i", &months);

	for (int i = 0; i < months; i++) {
		printf("Input profit for %i month: ", i + 1);
		scanf_s("%i", &profit[i]);
	}

	int sum = 0;
	for (int i = 0; i < months; i++) {
		sum += profit[i];
	}
	printf("Summary profit: %i. \nMiddle profit: %i.\n", sum, sum/months);

	return 0;
}