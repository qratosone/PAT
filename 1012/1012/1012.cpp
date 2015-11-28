// 1012.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int sumA1 = 0;
	int k1 = 0;
	int sumA2 = 0;
	int count3 = 0;
	vector<int> V4;
	int max5 = 0;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if (temp%10==0)
		{
			sumA1 += temp;			
		}
		if (temp%5==1)
		{
			sumA2 += temp*pow(-1, k1);
			k1++;
		}
		if (temp%5==2)
		{
			count3++;
		}
		if (temp%5==3)
		{
			V4.push_back(temp);
		}
		if (temp%5==4)
		{
			if (temp>max5)
			{
				max5 = temp;
			}
		}
		
	}
	if (sumA1)
		{
			cout << sumA1;
		}
		else
		{
			cout << "N";
		}
	if (sumA2)
	{
		cout << " " << sumA2;
	}
	else
	{
		cout << " N";
	}
	if (count3)
	{
		cout << " " << count3;
	}
	else
	{
		cout << " N";
	}
	
	//printf（“%05.2f”，i）；
	//5是一共5的宽度
	//0是不足的话在左边补0
	//2是小数点后保留两位
	double Avg4 = 0;
	for (int i = 0; i < V4.size(); i++)
	{
		Avg4 += V4[i];
	}
	if (V4.size())
	{
		Avg4 = Avg4 / (double)(V4.size());
		printf_s(" %.1f", Avg4);
	}
	else
	{
		cout << " N";
	}
	if (max5)
	{
		cout << " " << max5;
	}
	else
	{
		cout << " N";
	}
	
	
    return 0;
}

