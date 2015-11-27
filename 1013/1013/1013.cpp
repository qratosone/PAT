// 1013.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n) {
	if (n<2)
	{
		return false;
	}
	if (n == 2)
	{
		return true;
	}
	if (n>2 && n % 2 == 0)
	{
		return false;
	}
	for (int i = 3; i*i <= n; i++)
	{
		if (n%i == 0) { return false; }
	}
	return true;

}

int main()
{
	int n, m;
	cin >> n >> m;
	int count = 0;
	int start = 2;
	vector<int>PrimeList;
	while (count<m)
	{
		if (isPrime(start))
		{
			PrimeList.push_back(start);
			count++;
		}
		if (start==2)
		{
			start++;
		}
		else
		{
			start += 2;
		}
	}
	for (int i = n-1; i < PrimeList.size(); i++)
	{
		if ((i-n+1)%10==0)
		{
			cout << PrimeList[i];
		}
		else
		{
			cout << " " << PrimeList[i];
		}
		if ((i-n+2)%10==0)
		{
			cout << endl;
		}
		
	}
    return 0;
}

