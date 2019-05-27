#include<iostream>
using namespace std;
/*
void generatePermutations(int* arr, int size,int pos=0)
{
	static int* permutation = (int*)malloc(sizeof(int)*size);
	if (size == pos)
	{
		for (int i = 0; i < pos; i++)
			cout << permutation[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 0; i < size; i++)
	{
		int flag = 0;
		for (int j = 0; j <= pos; j++)
		{
			if (arr[i] == permutation[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			continue;
		permutation[pos] = arr[i];
		generatePermutations(arr, size, pos + 1);
	}
}

int main()
{
	int size;
	cout << "SIZE:";
	cin >> size;
	int* arr = (int*)malloc(sizeof(int)*size);
	for (int i = 0; i < size; i++)
		cin>> arr[i];
	permutations(arr, size);
	system("pause");
	return 0;
}*/