﻿#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;
int main () 
{

	double e = 0.0001;
	double a = 0.1;
	double b = 0.8;
	int k = 10;
	int n = 10;
	int y1;
	int y2;
	int y3;
	double h = (b - a) / k;
	double x;
	double sn;
	double S1;
	double S2;
	double f;
	for (y1 = 0; y1 <= k; y1++)
	{

		x = a + y1 * h;
		f = x * atan(x) - log(pow((1 + pow(x, 2)), (1 / 2)));

		for (S1 = 0, y2 = 1; y2 <= n; y2++)
		{

			S1 += pow(x, 4 * y1 + 1) / (4 * y1 + 1);
		}
		for (S2 = 0, sn = 1, y3 = 1; fabs(sn) >= e; y3++)
		{

			sn = pow(x, 4 * y2 + 1) / (4 * y2 + 1);
			S2 += sn;
		}
		printf("x=%.2f SN=%f SE=%f Y=%f\n", x, S1, S2, f);
	}
	return 0;
}
	

