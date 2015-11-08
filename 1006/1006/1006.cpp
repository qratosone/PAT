// 1006.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int a[4] = { 0 };
	int n;
	cin >> n;
	int count = 0;
	while (n!=0)
	{
		a[count] = n % 10;
		count++;
		n /= 10;
	}
	if (count==3)
	{
		for (int i = 0; i < a[2]; i++) {
			cout << "B";
		}
		for (int i = 0; i < a[1]; i++) {
			cout << "S";
		}
	}
	if (count==2)
	{
		for (int i = 0; i < a[1]; i++) {
			cout << "S";
		}
	}
	for (int i = 0; i < a[0]; i++)
	{
		cout << (i+1);
	}

    return 0;
}

