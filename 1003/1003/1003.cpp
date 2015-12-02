// 1003.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;
bool checkPAT(string str) {
	for (int i = 0; i < str.length(); i++)
	{
		if (!(str[i] == 'P'||str[i] == 'A'||str[i] == 'T'))
			return false;
	}
	return true;
}
int A1 = 0;
int A2 = 0;
int A3 = 0;
bool checkA(string str, int begin, int end,int &A) {
	int count = 0;
	for (int i = begin; i < end; i++)
	{
		if (str[i] != 'A') { return false; }
		else
		{
			count++;
		}
	}
	A = count;
	return true;
	
}
bool check(string str) {
	int posP = -1, posT = -1;
	if (!checkPAT(str))
	{
		return false;
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i]=='P')
		{
			posP = i;
			break;
		}
	}
	if (!checkA(str,0,posP,A1))
	{
		return false;
	}
	for (int i = str.length()-1; i >=0; i--)
	{
		if (str[i] == 'T') {
			posT = i;
			break;
		}
	}
	if (!checkA(str,posT+1,str.length(),A3))
	{
		return false;
	}
	if (!checkA(str,posP+1,posT,A2))
	{
		return false;
	}
	if (!A2)
	{
		return false;
	}
	if (A1*A2!=A3)
	{
		return false;
	}
	return true;
}
int main()
{
	int n;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (!check(input))
		{
			cout << "NO" << endl;;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
    return 0;
}

