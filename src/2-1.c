#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
	printf("2.1 \n");
	double r1 = 1.524; // � �.�
	double r2 = 1.0;
	double T1 = 1.881; // � �����
	double T2 = 1.0;

	const double w1 = 2 * PI / T1;
	const double w2 = 2 * PI / T2;

	const double t_start = 0.0;
	const double t_end = 5.0;
	const double dt = 0.1; // ���

	for (double t = t_start; t <= t_end; t += dt) {
		double x = r1 * cos(w1 * t) - r2 * cos(w2 * t);
		double y = r1 * sin(w1 * t) - r2 * sin(w2 * t);
		printf("Time: %.2f\t X:%.6f\t Y:%.6f\n", t, x, y);
	}
	return 0;
}