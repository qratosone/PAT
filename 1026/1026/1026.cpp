// 1026.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
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
	int min = (deltaSecond % 3600) / 60;
	int sec = deltaSecond -hour*3600-min*60;
	cout << hour << ":" << min << ":" << sec << endl;
    return 0;
}

