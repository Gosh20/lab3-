#include <iostream>
using namespace std;

double summ(int n) {
	double a = 0;
	double sum = 0;
	int i = 0;
	do {
		a = pow(-1, i) * ((1 - pow((2 * i - 1), 2)) / (2 * (i + 1)));
		sum += a;
		++i;
	} while (i < n);
	return sum;
}
