// 1028.cpp : 定义控制台应用程序的入口点。
//
//某城镇进行人口普查，得到了全体居民的生日。现请你写个程序，找出镇上最年长和最年轻的人。
//
//这里确保每个输入的日期都是合法的，但不一定是合理的——假设已知镇上没有超过200岁的老人，
//而今天是2014年9月6日，所以超过200岁的生日和未出生的生日都是不合理的，应该被过滤掉。
//
//输入格式：
//
//输入在第一行给出正整数N，取值在(0, 105]；随后N行，每行给出1个人的姓名（由不超过5个英文字母组成的字符串）、
//以及按“yyyy / mm / dd”（即年 / 月 / 日）格式给出的生日。题目保证最年长和最年轻的人没有并列。
//
//输出格式：
//
//在一行中顺序输出有效生日的个数、最年长人和最年轻人的姓名，其间以空格分隔。
#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
class elder {
public:
	string name;
	int yy;
	int mm;
	int dd;
	elder(string person, int year, int month, int day) {
		name = person;
		yy = year;
		mm = month;
		dd = day;
	}
	bool judge() {
		if (yy>2014)
			return false;
		if (yy == 2014 && mm>9)
			return false;
		if (yy == 2014 && mm == 9 && dd>6)
			return false;
		if (yy<1814)
			return false;
		if (yy == 1814 && mm<9)
			return false;
		if (yy == 1814 && mm == 9 && dd<6)
			return false;
		return true;
	}
	bool sameDay(elder toad) {
		if (yy==toad.yy&&dd==toad.dd&&mm==toad.mm)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool TooYoung(elder toad) {  //如果比蛤年轻则输出true
		if (yy<toad.yy)
		{
			return false;
		}
		if (yy==toad.yy&&mm<toad.mm)
		{
			return false;
		}
		if (yy==toad.yy&&mm==toad.mm&&dd<toad.dd)
		{
			return false;
		}
		return true;
	}
};
int main()
{
	int n;
	cin >> n;
	vector<elder> Vlist;
	string name=" ";
		int yy=0;
		int mm=0;
		int dd=0;
	for (int i = 0; i < n; i++)
	{
		cin >> name;
		scanf_s("%d/%d/%d",  &yy, &mm, &dd);
		elder temp(name, yy, mm, dd);
		if (temp.judge())
		{
			Vlist.push_back(temp);
		}
	}
	int ToadNum = 0;
	int SharonNum = 0;

	
	
	if (Vlist.size())
	{
		cout << Vlist.size() << " ";
		for (int i = 0; i < Vlist.size(); i++)
			{
				if (Vlist[ToadNum].TooYoung(Vlist[i])) //如果比蛤年长则更新蛤
				{
					ToadNum = i;
				}
				if (Vlist[i].TooYoung(Vlist[SharonNum])) //如果比张宝华年轻则更新张宝华
				{
					SharonNum = i;
				}
			}
		cout << Vlist[ToadNum].name << " " << Vlist[SharonNum].name;
	}
	else
	{
		cout << endl;
	}
    return 0;
}

