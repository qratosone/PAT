// 1017.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	int b;
	cin >> a >> b;
	int temp = 0;
	bool first = false;
	for (int i = 0; i < a.length(); i++)
	{
		temp = temp * 10 + a[i] - '0';
		if (temp>=b)
		{
			cout << temp / b;
			first = true;
		}
		else if (first)
		{
			cout << 0;
		}
		temp = temp%b;
	}
	if (!first)
	{
		cout << 0;
	}
	cout << " " << temp << endl;
    return 0;
}

