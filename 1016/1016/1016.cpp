// 1016.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A, B;
	char da, db;
	cin >> A >> da >> B >> db;
	
	int numA = (int)(da - '0');
	int numB = (int)(db - '0');
	int totalA = 0, totalB = 0;
	for (int i = 0; i < A.length(); i++)
	{
		if (A[i]==da)
		{
			totalA *= 10;
			totalA += numA;
		}
	}
	for (int i = 0; i < B.length(); i++)
	{
		if (B[i]==db)
		{
			totalB *= 10;
			totalB += numB;
		}
	}
	cout << totalA +totalB << endl;
    return 0;
}

