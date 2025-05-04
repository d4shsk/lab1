#include <stdio.h>
#include <math.h>

int main() {
	int y;
	printf("3.1 \n");
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
	printf("array Y: ");
	for (int i = 0; i < size; i++) {
		y = X[i] * X[i];
		printf("%d \t", y);
	}
	printf("\n");
	return 0;
}