// 1030.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include <iostream>
#define MAXN 100005
using namespace std;

double a[MAXN];

int main()
{
	int n;
	double p;
	cin >> n >> p;
	
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		a[i] = temp;
	}
	sort(a, a + n);
	int maxlen = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+maxlen; j < n; j++)//a[j]为当前最大值
		{
			double tempMin = a[i] * p;//最小值m*p
			if (a[j]>tempMin)
			{
				break;
			}
			if (maxlen<j-i)
			{
				maxlen = j - i;
			}

		}
	}
	cout << maxlen+1 << endl;
    return 0;
}

