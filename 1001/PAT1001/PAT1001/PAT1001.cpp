// PAT1001.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n, All=0;
	cin >> n;
	while (n!=1)
	{
		if (n%2==0)
		{
			n /= 2;
			All++;
		}
		else
		{
			n = 3 * n + 1;
			n /= 2;
			All++;
		}
	}
	cout << All << endl;
    return 0;
}

