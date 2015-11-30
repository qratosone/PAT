// 1010.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int a, n;
	bool flag = false;
	while (cin>>a>>n)
	{
		
		if (n != 0)
		{
			a = a*n;
			n--;
		}
		else
		{
			a = 0;
			n = 0;
		}

		if (a != 0 || n != 0)
		{
			if (!flag)
			{
				cout << a << " " << n;
				flag = true;
			}
			else
			{
				cout << " " << a << " " << n;
			}
		}
		
		
	}
	if (!flag)
	{
		cout << "0 0";
	}
	return 0;
}

