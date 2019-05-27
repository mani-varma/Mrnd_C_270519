#include<iostream>
#include<stdio.h>
using namespace std;
/*
char* convertToMirror(int num)
{
	char mirror[10]{'0', '1', '2', 'E', 'h', '5', '9', 'L', '8', '6'};
	int d = 0;
	int num1 = num;
	do
	{
		d++;
		num1 /= 10;
	} while (num1 > 0);
	char* str = (char*)malloc(d + 1);
	for (int i = 0; i < d; i++,num/=10)
		str[i] = mirror[num % 10];
	str[d] = '\0';
	return str;
}

void print(int size,int currState=0)
{
	if (size == 1)
	{
		cout <<convertToMirror(currState/10)<<" ";
		return;
	}
	for (int i = 0; i < 10; i++)
		print(size-1,(currState+i)*10);
}
int main()
{
	print(4);
	system("pause");
	return 0;
}*/