#include<iostream>
using namespace std;


long sum(int* a, int size)
{
	if (size == 0)
		return 0;
	return a[size - 1] + sum(a, size - 1);
}
