// 1023.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;
bool compare(int a, int b) { return a < b; }
int main()
{
	int a[10];
	int min = 0;
	bool check = false;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
		if (!check&&i>0&&a[i]>0)
		{
			min = i;
			check = true;
		}
	}
	if (min>0)
	{
		cout << min;
		a[min]--;
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < a[i]; j++)
		{
			cout << i;
		}
	}
	cout << endl;
	return 0;
}

