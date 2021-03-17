#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int findFirstNegativeElement(double eps)
{
	double a;
	int i=0;
	while (i < 100000000)
	{
		a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		if (a < 0 && abs(a) <= eps)
			return i;
		else ++i;
	}
	return i;
}