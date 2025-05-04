#include <stdio.h>
#include <math.h>

double f(double x) {
	return exp(x);
}
double trapezoidal_integral(double a, double b, int n) {
	double h = (b - a) / n;
	double sum = (f(a) + f(b)) / 2.0;

	for (int i = 1; i < n; i++) {
		double x = a + i * h;
		sum += f(x);
	}

	return sum * h;
}

int main() {
	printf("2.2 \n");
	double a = 0.0;
	double b = 1.0;
	int n = 1000; // ���������� �������� 

	double integral = trapezoidal_integral(a, b, n);
	double exact = exp(b) - exp(a);

	printf("Calculated integral: %.8f\n", integral);
	printf("Analyzed integral : %.8f\n", exact);
	return 0;
}