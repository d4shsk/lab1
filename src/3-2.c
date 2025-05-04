#include <stdio.h>
#include <math.h>

int main() {
	printf("3.2 \n");
	int size;
	printf("Input size: ");
	scanf("%d", &size);
	while (getchar() != '\n');
	int X[size];
	printf("Input X: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &X[i]);
		while (getchar() != '\n');
	}
	for (int i = 0; i < size / 2; i++) {
		int temp = X[i];
		X[i] = X[size - 1 - i];
		X[size - 1 - i] = temp;
	}
	printf("Reversed array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", X[i]);
	}
	printf("\n");
	return 0;
}