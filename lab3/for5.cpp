#include <iostream>

using namespace std;

int findFirstNegativeElement(double eps) {
	int count = 0;
	
	for (int i = 0;; i++) {
		double a = pow(-1, i) * ((pow(i, 2) + 1) / (pow(i, 3) + 3)); // ����������� 4 �������
		// double a = pow(-1, i) * ((1 - pow((2 * i - 1), 2)) / (2 * (i + 1))); �� ���������� ���� � ���������� ��������� 
		if (abs(a) <= eps && a < 0)
		{
			return count = i + 1;
		}
	}
}


