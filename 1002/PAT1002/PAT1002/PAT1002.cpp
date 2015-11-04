// PAT1002.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	char num[101] = { 0 };
	cin >> num;
	int total = 0;
	char *temp = num;
	while (*temp!='\0')
	{
		total += (*temp - '0');
		temp++;
	}
}

