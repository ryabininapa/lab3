#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

double summ(int n)
{
	double a;
	double f = 0;
	for (int i = 0; i<n; ++i)
	{
		a = pow(-1, i) * (1 / (2*(i+1)));
		f = f + a;
	}
	return f;
}