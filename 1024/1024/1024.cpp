// 1024.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cstdio>
#include<stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	int e=0, tag=1;//e为指数，tag表示数位计量
	int len;
	cin >> input;
	if (input[0] == '-')cout << '-';
	len = input.length() - 1;
	while (input[len]!='+'&&input[len]!='-')
	{
		e += tag*(input[len] - '0');
		tag*=10;
		len--;
	}
	if (e==0)
	{
		for (int i = 1; i < len ; i++)
		{
			cout << input[i];
		}
	}
	else
	{
		if (input[len] == '-')
		{
			cout << "0.";
			for (int i = 0; i < (e - 1); i++)
			{
				cout << "0";
			}

			for (int i = 1; i < len - 1; i++)
			{
				if (input[i] == '.')
				{
					continue;
				}
				else
				{
					cout << input[i];
				}
			}
		}
		else
		{
			if (e >= 1)
			{
				bool flag = false;
				int count = 0;
				for (int i = 1; i < len - 1; i++)
				{
					if (input[i] == '.')
					{
						flag = true;
						continue;
					}
					else
					{
						if (flag)count++;
						cout << input[i];
					}
				}
				for (int i = 0; i < e - count; i++)
				{
					cout << '0';
				}
			}
			else
			{
				for (int i = 1; i < len - 1; i++)
				{
					cout << input[i];
				}
			}
		}
	}
	cout << endl;
    return 0;
}

