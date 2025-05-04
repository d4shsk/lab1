#include <stdio.h>
#include <math.h>

int main() {
	printf("2.4 \n");
	int number, sum;
	do {
		printf("Enter a three-digit number: ");
		scanf("%d", &number);
		if (number < 100 || number > 999) {
			printf("Number must contain 3 digits\n");
			continue;
		}
		int digit1 = number / 100;
		int digit2 = (number / 10) % 10;
		int digit3 = number % 10;
		sum = digit1 + digit2 + digit3;
		printf("Sum: %d\n", sum);
		if (sum <= 10) {
			printf("Sum <= 10\n");
			break;
		}
	} while (1);
	return 0;
}