#include<iostream>
using namespace std;
void climb(int n, int k,int* c)
{
	if (n == 0)
	{
		(*c)++;
		return;
	}
	
	for (int i = 1; i <= k; i++)
	{
		if (n - i < 0)
			return;
		climb(n - i, k,c);
	}
}


