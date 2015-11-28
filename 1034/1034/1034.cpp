// 1034.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class number {
public:
	int intPart;
	int denominator;
	int numerator;
	number() {
		intPart = 0;
		denominator = 0;
		numerator = 0;
	}
};

int main()
{
	string numA, numB;
	char op;
	number A;
	number B;
	cin >> numA >> op >> numB;
	string::size_type posiAspace;
	posiAspace = numA.find(" ");
	if (posiAspace!=numA.npos)
	{
		int tempInt = 0;
		for (int i = 0; i < posiAspace; i++)
		{
			int num = numA[i] - '0';
			tempInt = tempInt * 10 + num;
		}
		A.intPart = tempInt;
	}
    return 0;
}

