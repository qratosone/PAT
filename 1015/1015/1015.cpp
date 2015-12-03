// 1015.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
class student {
public:
	string ID;
	int moral;
	int talent;
};
int main()
{
	int n, l, h;
	cin >> n >> l >> h;
	vector<student>v1;
	vector<student>v2;
	vector<student>v3;
	vector<student>v4;
	for (int i = 0; i < n; i++)
	{
		string t1;
		int  t2, t3;
		student ts;
		scanf_s("%s %d %d", t1, &t2, &t3);
		ts.ID.assign(t1);
		ts.moral = t2;
		ts.talent = t3;
		if (t2>=h&&t3>=h)
		{
			v1.push_back(ts);
		}
		else if(t2>=l&&t3>=l)
		{
			if (t2>=h&&t3<h)
			{
				v2.push_back(ts);
			}
			else if (t2>=t3)
			{
				v3.push_back(ts);
			}
			else
			{
				v4.push_back(ts);
			}
		}
	}
    return 0;
}

