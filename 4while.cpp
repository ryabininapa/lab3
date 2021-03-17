#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
int findFirstElement(double eps)
{
	double a;
	int i = 0;
	while (i < 100000)
	{
		a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		if (abs(a) <= eps)
			break;
		else ++i;
	}
	return i;
}