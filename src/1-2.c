#include <stdio.h>

int main() {
	int num1, num2, sum;
	
	printf("1.2 \nEnter number 1: ");
	scanf("%d", &num1);

	while (getchar() != '\n');

	printf("Enter number 2: ");
	scanf("%d", &num2);

	sum = num1 + num2;
	printf("Sum = %d\n", sum);
	return 0;
}