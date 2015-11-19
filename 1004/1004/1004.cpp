// 1004.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class student {
public:
	string name;
	string ID;
	int score;
};

int main()
{
	int n, first = 0, last = 0;
	cin >> n;
	student *stu = new student[n];
	for (int i = 0; i < n; i++)
	{
		cin >> stu[i].name >> stu[i].ID >> stu[i].score;
	}
	if (n==1)
	{
		cout << stu[0].name << " " << stu[0].ID << endl;
		cout << stu[0].name << " " << stu[0].ID << endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (stu[first].score < stu[i].score) { first = i; }
			if (stu[last].score>stu[i].score)
			{
				last = i;
			}
		}
		cout << stu[first].name << " " << stu[first].ID << endl;
		cout << stu[last].name << " " << stu[last].ID << endl;
	}
    return 0;
}

