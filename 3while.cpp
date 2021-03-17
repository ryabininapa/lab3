#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
void print(int n, int k)
{
	double a;
	int i = 0;
	while (i < n)
	{
		if(((i+1)% k) == 0)
		{
			++i;
		continue;
		}
		a = pow(-1, i) * ((i + 1) / (pow(i, 2) + 1));
		cout << "a(" << i << ") = " << a << endl;
		++i;
	}
}