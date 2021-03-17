#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

double summ(int n)
{
	double a;
	double f = 0;
	int i = 0;
	do
	{
		a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		f = f + a;
		++i;
	} while (i < n);
	return f;
}