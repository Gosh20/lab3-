#include <iostream>
using namespace std;

double summ2(double eps) {
	double a = pow(-1, 0) * (pow(0, 2) + 1) / (pow(0, 3) + 3);;
	double sum = 0;
	int i = 0;
	if (eps == 0) {
		return 0;
	}
	else {
		do {
			//a = pow(-1, i) * ((1 - pow((2 * i - 1), 2)) / (2 * (i + 1)));
			a = pow(-1, i) * (pow(i, 2) + 1) / (pow(i, 3) + 3); // по 4 варианту
			sum += a;
			++i;
		} while (abs(a) > eps);
		return sum;
	}
}
