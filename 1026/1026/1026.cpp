// 1026.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int c1, c2;
	cin >> c1 >> c2;
	int deltaSecond = (c2 - c1)/100;
	if ((c2-c1)%100>=50)
	{
		deltaSecond++;
	}
	int hour = deltaSecond / 3600;
	deltaSecond -= (hour * 3600);
	int min = deltaSecond / 60;
	deltaSecond -= min * 60;
	int sec = deltaSecond ;
	printf("%02d:%02d:%02d", hour, min, sec);
    return 0;
}

