#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
double summ2(double eps)
{
	double a=100000;
	double f = 0;
	int i = 0;
while (abs(a) > eps)
	{
	a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		f = f + a;
		++i;
	}
	return f;
}
