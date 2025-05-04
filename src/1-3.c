#include <stdio.h>
#include <math.h>

int main() {
	double x, y, u;
	printf("1.3 \nEnter x: ");
	scanf("%lf", &x);
	printf("Enter y: ");
	scanf("%lf", &y);

	u = (1 + pow(sin(x + y), 2)) / (2 + fabs(x - (2 * pow(x, 2)) / (1 + fabs(sin(x + y)))));

	printf("u(%.2f, %.2f) = %.6f\n", x, y, u);
}