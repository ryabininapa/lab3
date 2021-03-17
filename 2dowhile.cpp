#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
double summ2(double eps)
{
	double a;
	double f = 0;
	int i = -1;
	do
	{
		++i;
		a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		f = f + a;
	} while (abs(a) > eps);
	return f;
}