// PAT1002.cpp : �������̨Ӧ�ó������ڵ㡣
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

