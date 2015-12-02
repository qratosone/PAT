// 1014.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

string Weekday[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main()
{
	string s[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> s[i];
	}
	int count01 = 0;
	for (; count01 < s[0].length() && count01 < s[1].length();count01++) {
		if (s[0][count01] == s[1][count01] && s[0][count01] >= 'A'&&s[0][count01] <= 'G' )
		{
			int day = s[0][count01] - 'A';
			cout << Weekday[day] << " ";
			count01++;
			break;
		}
		
	}
	for (; count01 < s[0].length() && count01 < s[1].length(); count01++) {
		
		if (s[0][count01] == s[1][count01] && (s[0][count01] >= 'A'&&s[0][count01] <= 'N' || s[0][count01] >= '0'&&s[0][count01] <= '9'))
		{
			int hour;
			if (s[0][count01] >= 'A'&&s[0][count01] <= 'N')
			{
				 hour = s[0][count01] - 'A' + 10;
			}
			else
			{
				hour = s[0][count01] - '0';
			}
			printf("%02d:", hour);
			break;
		}
		
	}
	int minute = 0;
	for (; minute < s[2].length() && minute < s[3].length();minute++)
	{
		if (s[2][minute]==s[3][minute])
		{
			if ((s[2][minute] >= 'A'&&s[2][minute] <= 'Z')|| s[2][minute] >= 'a'&&s[2][minute] <= 'z')
			{
				break;
			}
		}
		
	}
	printf("%02d", minute);
	cout << endl;
    return 0;
}

