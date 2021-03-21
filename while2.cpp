#include <iostream>

using namespace std;

double summ2(double eps) {
	double a;
	double sum = 0;
	int i = 0;
	a = pow(-1, 0) * (pow(0, 2) + 1) / (pow(0, 3) + 3);

	while (abs(a) > eps) {
		//a = pow(-1, i) * ((1 - pow((2 * i - 1), 2)) / (2 * (i + 1)));
		a = pow(-1, i) * (pow(i, 2) + 1) / (pow(i, 3) + 3); // по 4 варианту
		sum += a;
		++i;
	}
	return sum;
}
