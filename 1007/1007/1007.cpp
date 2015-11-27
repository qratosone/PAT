// 1007.cpp : 定义控制台应用程序的入口点。
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
	if (n==2)
	{
		return true;
	}
	if (n>2&&n%2==0)
	{
		return false;
	}
	for (int i = 3; i*i <=n; i++)
	{
		if (n%i == 0) { return false; }
	}
	return true;
	
}
int main()
{
	vector<int> primelist;
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (isPrime(i)) {
			primelist.push_back(i);
		}
	}
	int count = 0;
	for (int i = 0; i < primelist.size()-1; i++)
	{
		int delta = primelist[i + 1] - primelist[i];
		if (delta==2)
		{
			count++;
		}
	}
	cout << count << endl;
    return 0;
}

