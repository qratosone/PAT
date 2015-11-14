// 1021.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main()
{
	int num[10] = { 0 };
	string n;
	cin >> n;
	int length = n.length();
	for (int i = 0; i < length; i++)
	{
		int temp = n[i] - '0';
		num[temp]++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (num[i] != 0)
		{
			cout << i << ":" << num[i] << endl;
		}
	}
    return 0;
}

