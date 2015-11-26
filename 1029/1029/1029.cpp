// 1029.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string a, b;
	cin >> a;
	cin >> b;
	set<char> original;
	set<char> fact;
	vector<char>originV;
	vector<char> factV;
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] >= 'a'&&a[i] <= 'z') {
			a[i] = a[i] + 'A' - 'a';
		}
		if (original.insert(a[i]).second)
		{
			originV.push_back(a[i]);
		}
	}
	for (int i = 0; i < b.length(); i++)
	{
		if (b[i] >= 'a'&&b[i] <= 'z') {
			b[i] = b[i] + 'A' - 'a';
		}
		if (fact.insert(b[i]).second)
		{
			factV.push_back(b[i]);
		}
	}
	int j = 0;
	for (int i = 0; i < originV.size(); i++)
	{
		if (originV[i]==factV[j]&&j<factV.size())
		{
			j++;
		}
		else
		{
			cout << originV[i];
		}
	}
    return 0;
}

