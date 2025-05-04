#include <stdio.h>
#include <math.h>

double calculate_h(double x, double a, double b, double c) {
	double term1 = -(x - a) / cbrt(x * x + a * a);

	double numerator = 4 * pow(pow(x * x + b * b, 3), 0.25);
	double denominator = 2 + a + b + cbrt(pow(x - c, 2));
	double term2 = numerator / denominator;

	return term1 - term2;
}

int main() {
	printf("1.4 \n");
	double a = 0.12, b = 3.5, c = 2.4, x = 1.4;
	printf("1. %lf \n", calculate_h(x, a, b, c));
	a = 0.12, b = 3.5, c = 2.4, x = 1.6;
	printf("2. %lf \n", calculate_h(x, a, b, c));
	a = 0.27, b = 3.9, c = 2.8, x = 1.8;
	printf("3. %lf \n", calculate_h(x, a, b, c));
	return 0;
}