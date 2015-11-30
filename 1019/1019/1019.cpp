// 1019.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
void restoreNum(vector<int> v,int &big,int &small ) {
	
	for (int i = 0; i < v.size(); i++)
	{
		big = big * 10 + v[i];
		small = small * 10 + v[3 - i];
	}
	
}
int main()
{
	int n;
	cin >> n;
	int bignum, smallnum;
	vector<int>small;
	do
	{
		bignum = 0;
		smallnum = 0;
		small.clear();
		for (int i = 0; i < 4; i++)
		{
			small.push_back(n % 10);
			n /= 10;
		}
		sort(small.begin(), small.end(),greater<int>());
		restoreNum(small, bignum, smallnum);
		int delta = bignum - smallnum;
		printf("%04d - %04d = %04d\n",bignum,smallnum,delta);
		n = delta;
		
	} while (n != 0 && n != 6174);
    return 0;
}

