// 1033.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
bool NotBad(string bad,char ch, int n) {
	if (ch<='Z'&&ch>='A')
	{
		if (!NotBad(bad, '+', n))return false;
	}
	if (ch<='z'&&ch>='a')
	{
		ch = ch - 'a' + 'A';
	}
	for (int i = 0; i < n; i++)
	{
		if (ch == bad[i])return false;
	}
	return true;
}

int main()
{
	string broken, input;
	getline(cin, broken, '\n');
	getline(cin, input, '\n');
	for (int i = 0; i < input.length(); i++)
	{
		if (NotBad(broken, input[i], broken.length())) {
			putchar(input[i]);
		}
	}
	cout << endl;
	return 0;
}

