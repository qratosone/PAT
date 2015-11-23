// 1027.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
	int n;
	char c;
	cin >> n>>c;
	int count = 1;
	int total = 0;
	do
	{
		count++;
		total = 2 * count*count - 1;
		
	} while (total < n);
	if (total>n)
	{
		count--;
		total = 2 * count*count - 1;
	}
	
	total = 2 * count*count - 1;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int h = 0; h < 2*count-1-2*i; h++)
		{
			cout << c;
		}
		
		cout << endl;
	}
	for (int i = count-2; i >=0; i--)
	{
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int h = 0; h < 2 * count - 1 - 2 * i; h++)
		{
			cout << c;
		}
		
		cout << endl;
	}
	cout << n - total;
    return 0;
}

