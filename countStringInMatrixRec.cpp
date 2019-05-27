#include<iostream>
using namespace std;
/*
bool N(char** arr, int r, int c, char* str)
{
	if (str[0] == NULL)
		return true;
	if (arr[r][c] != str[0])
			return false;
	N(arr,r-1,c,str+1);
}

bool NE(char** arr, int r, int c, char* str)
{
	if (str[0] == NULL)
		return true;
	if (arr[r][c] != str[0])
		return false;
	N(arr, r - 1, c+1, str + 1);
}

bool NW(char** arr, int r, int c, char* str)
{
	if (str[0] == NULL)
		return true;
	if (arr[r][c] != str[0])
		return false;
	N(arr, r - 1, c-1, str + 1);
}

bool E(char** arr, int r, int c, char* str)
{
	if (str[0] == NULL)
		return true;
	if (arr[r][c] != str[0])
		return false;
	N(arr, r, c+1, str + 1);
}

bool W(char** arr, int r, int c, char* str)
{
	if (str[0] == NULL)
		return true;
	if (arr[r][c] != str[0])
		return false;
	N(arr, r, c-1, str + 1);
}

bool S(char** arr, int r, int c, char* str)
{
	if (str[0] == NULL)
		return true;
	if (arr[r][c] != str[0])
		return false;
	N(arr, r + 1, c, str + 1);
}

bool SE(char** arr, int r, int c, char* str)
{
	if (str[0] == NULL)
		return true;
	if (arr[r][c] != str[0])
		return false;
	N(arr, r+1, c+1, str + 1);
}

bool SW(char** arr, int r, int c, char* str)
{
	if (str[0] == NULL)
		return true;
	if (arr[r][c] != str[0])
		return false;
	N(arr, r + 1, c-1, str + 1);
}

int strOccurenceCount(char** arr, int row, int col, char* str)
{
	int count = 0;
	int length = strlen(str);
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (arr[i][j] == str[0])
			{
				if (i >= length - 1 && j >= length - 1 && NW(arr, i - 1, j - 1, str+1))
				{
					cout << "(" << i << "," << j << ")";
					count++;
				}
				if (i >= length - 1 && N(arr, i - 1, j, str+1))
				{
					cout << "(" << i << "," << j << ")";
					count++;
				}
				if (i >= length - 1 && j <= col - length&&NE(arr, i - 1, j + 1, str+1))
				{
					cout << "(" << i << "," << j << ")";
					count++;
				}
				if (j >= length - 1 && W(arr, i, j - 1, str+1))
				{
					cout << "(" << i << "," << j << ")";
					count++;
				}
				if (j <= col - length&&E(arr, i, j + 1, str+1))
				{
					cout << "(" << i << "," << j << ")";
					count++;
				}
				if (i <= row - length&&j >= length - 1 && SW(arr, i + 1, j - 1, str+1))
				{
					cout << "(" << i << "," << j << ")";
					count++;
				}
				if (i <= row - length&&S(arr, i + 1, j, str+1))
				{
					cout << "(" << i << "," << j << ")";
					count++;
				}
				if (i <= row - length&&j <= col - length&&SE(arr, i + 1, j + 1, str+1))
				{
					cout << "(" << i << "," << j << ")";
					count++;
				}

			}
	return count;
}


int main()
{
	char** arr = new char*[3];
	for (int i = 0; i < 3; i++)
		arr[i] = new char[3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];
	char* str = new char[4];
	cin >> str;
	int c = strOccurenceCount(arr, 3, 3, str);
	cout << c;
	system("pause");
	return 0;
}*/