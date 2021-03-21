#include <iostream>
using namespace std;

int findFirstElement(double eps) {
	int count = 0;
	double a = 0;
	for (int i = 0;; i++) {
		a = pow(-1, i) * ((1 - pow((2 * i - 1), 2)) / (2 * (i + 1)));
		if (abs(a) <= eps)
		{
			count = i;
			break;
		}
	}
	count += 1;
	return count;
}





