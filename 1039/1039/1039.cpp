// 1039.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string get;
	string want;
	cin >> get;
	cin >> want;
	int got = 0;
	for (int i = 0; i <want.length(); i++)
	{
		for (int j = 0; j < get.length(); j++)
		{
			if (get[j]==want[i])
			{
				got++;
				get[j] = '#';
				break;
			}
		}
	}
	if (got==want.length())
	{
		cout << "Yes " << get.length() - want.length() << endl;
	}
	else
	{
		cout << "No " << want.length() - got << endl;
	}

    return 0;
}

