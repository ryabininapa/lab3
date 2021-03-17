#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
double summ2(double eps)
{
	double a=100000;
	double f = 0;
	for (int i = 0; (abs(a) > eps); ++i)
	{
		a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		f = f + a;
	}
	return f;
}
