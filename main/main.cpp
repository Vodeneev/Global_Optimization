#include <stdio.h>
#include <iostream>
#include <GS.h>
int main()
{
	pair<double, double> res;
	res = GlobalSearchMultivariate(-1, 1, 0, 3);
	cout << res.first << ' ' << res.second;
}