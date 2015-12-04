// 1040.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int numT = 0;
	int numAT = 0;
	int numPAT = 0;
	for (int i = input.length()-1; i >=0; i--)
	{
		if (input[i]=='T')
		{
			numT++;
		}
		else if(input[i]=='A')
		{
			numAT = numAT + numT;
			numAT %= 1000000007;
		}
		else if(input[i]=='P')
		{
			numPAT = numPAT + numAT;
			numPAT %= 1000000007;
		}
	}
	cout << numPAT << endl;
    return 0;
}

