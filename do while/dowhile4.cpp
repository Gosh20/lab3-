#include <iostream>
using namespace std;

int findFirstElement(double eps) {
	int count = 0;
	double a;
	int i = 0;
	a = pow(-1, 0) * ((1 - pow((2 * 0 - 1), 2)) / (2 * (0 + 1)));
	do {
		a = pow(-1, i) * ((1 - pow((2 * i - 1), 2)) / (2 * (i + 1)));
		if (abs(a) <= eps) {
			count = i;
			break;
		}
		++i;
	} while (abs(a) > eps);
	count += 1;
	return count;
}
