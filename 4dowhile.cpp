#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
int findFirstElement(double eps)
{
	double a;
	int i = 0;
	do
	{
		a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		if (abs(a) <= eps)
			break;
		++i;
	} while (i < 100000);
return i;
}