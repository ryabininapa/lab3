#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
int findFirstElement(double eps)
{
	double a = 0;
	double f = 0;
	int i;
	for (i = 0; i < 100000; ++i)
	{
		a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		if (abs(a) <= eps)
			break;
	}
	return i;
}
