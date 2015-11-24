// 1018.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>result(n);
	int pose[6] = { 0 };//前面三个数依次表示甲BCJ
	char a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (a==b)
		{
			result[i] = 0;
		}
		else
		{
			if (a=='C'&&b=='J')
			{
				result[i] = 1;
				pose[1]++;
			}
			else if(a=='J'&&b=='B')
			{
				result[i] = 1;
				pose[2]++;
			}
			else if(a=='B'&&b=='C')
			{
				result[i] = 1;
				pose[0]++;
			}
			else
			{
				result[i] = -1;
				if (a == 'J'&&b == 'C')
				{
					pose[4]++;
				}
				if (a == 'B'&&b == 'J')
				{
					pose[5]++;
				}
				if (a=='C'&&b=='B')
				{
					pose[3]++;
				}
			}
		}
	}
	int win = 0, lose = 0, peace = 0;
	for (int i = 0; i < n; i++)
	{
		switch (result[i]) {
			case 1:win++; break;
			case 0:peace++; break;
			case -1:lose++; break;
		}			
	}
	char awin='B', bwin='B';
	char resultGroup[6] = { 'B','C','J','B','C','J' };
	for (int i = 0; i < 3; i++)
	{
		int max = pose[0];
		if (pose[i]>max)
		{
			awin = resultGroup[i];
		}
	}
	for (int i = 3; i < 6; i++)
	{
		int max = pose[3];
		if (pose[i]>max)
		{
			bwin = resultGroup[i];
		}
	}
	cout << win << " " << peace << " " << lose<<endl;
	cout << lose << " " << peace << " " << win<<endl;
	cout << awin << " " << bwin;
    return 0;
}

