// 1036.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	char ch;
	cin >> n >> ch;
	int h;
	if (n%2==0)
	{
		h = n / 2;
	}
	if (n%2==1)
	{
		h = n / 2 + 1;
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == 0 || j == n - 1) { cout << ch; }
			else
			{
				if (i==0||i==h-1)
				{
					cout << ch;
				}
				else
				{
					cout << " ";
				}
			}
			
		}
		cout << endl;
	}
    return 0;
}

