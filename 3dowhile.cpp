#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
void print(int n, int k)
{
	double a;
	int i = -1;
	do
	{
		++i;
		if (((i+1) % k) == 0)
		continue;
		a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		cout << "a(" << i << ") = " << a << endl;
		++i;
	}
	while (i < n-1);
}