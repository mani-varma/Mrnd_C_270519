#include<iostream>
#include<map>
using namespace std;

long long int fib(int n)
{
	static map<int, int> m;
	if (n == 0 || n == 1)
		return n;
	if(m[n]!=0)
		return m[n];
	else
	{
		m[n] = fib(n - 1) + fib(n - 2);
		return m[n];
	}
}

