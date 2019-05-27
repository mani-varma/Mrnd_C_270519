#include<iostream>
using namespace std;

long long int aPowern(int a, int n)
{
	if (n == 0)
		return 1;
	return a*aPowern(a, n - 1);
}