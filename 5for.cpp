#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int findFirstNegativeElement(double eps)
{
	double a;
	int i;
	for (i = 0; i < 100000000; ++i)
	{
		a= pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		if (a < 0 && abs(a) <= eps)
			return i;
	}
	return i;
}