#include <stdio.h>
#include <math.h>

int main() {
	printf("2.3 \n");
	int m;
	printf("Enter max number: ");
	scanf("%d", &m);
	int p0 = 1, p1 = 1, p2 = 1;
	int current;
	printf("The sequence of Padovan numbers \n");
	printf("%d ", p0);
	if (m > 1) printf("%d ", p1);
	if (m > 1) printf("%d ", p2);

	// Генерация последующих чисел
	for (int n = 3; ; n++) {
		current = p0 + p1;  // P(n) = P(n-2) + P(n-3)

		if (current > m) break;

		printf("%d ", current);

		// Обновляем предыдущие значения для следующей итерации
		p0 = p1;
		p1 = p2;
		p2 = current;
	}
	printf("\n");
}