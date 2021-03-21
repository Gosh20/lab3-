#include <iostream>
using namespace std;

int findFirstNegativeElement(double eps) {
	int count = 0;
	int i = 0;
	double a = pow(-1, 0) * ((pow(0, 2) + 1) / (pow(0, 3) + 3));
	while (abs(a) > 0) {
		 a = pow(-1, i) * ((pow(i, 2) + 1) / (pow(i, 3) + 3)); // использован 4 вариант
		// double a = pow(-1, i) * ((1 - pow((2 * i - 1), 2)) / (2 * (i + 1))); не работатает даже с измененным вариантом
		if (abs(a) <= eps && a < 0)
		{
			return count = i + 1;
		}
		++i;
	}
}
