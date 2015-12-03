// 1044.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;
string arr1[13] = { "tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec" };
string arr2[12] = { "tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou" };
bool stringEqual(string a, string b) {
	if (a.length()!=b.length())
	{
		return false;
	}
	else
	{
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] != b[i])return false;
		}
	}
	return true;
}
int main()
{
	int n=98;
	//scanf_s("%d", &n);
	
	string mars;
	string input[100] = { "" };
	/*ifstream in;
	in.open("test.txt");*/

	bool flag = false;
	for (int i = 0; i <n+1 ; i++)
	{
		
		//getline(in,input[i]);
		getline(cin, input[i], '\n');
		if (i == 0) { continue; }
		if (input[i][0] >= '0'&&input[i][0] <= '9') {
			int num = 0;
			for (int j = 0; j < input[i].length(); j++)
			{
				num = num * 10 + input[i][j] - '0';
			}
			int a = 0, b = 0;
			a = num / 13;
			b = num % 13;
			if (a>0)
			{
				if (b!=0)
				{
					printf("%s %s\n", arr2[a - 1].c_str(), arr1[b].c_str());
				}
				else
				{
					printf("%s\n", arr2[a - 1].c_str());
				}
			}
			else
			{
				printf("%s\n", arr1[b].c_str());
			}
		}
		else
		{
			if (input[i].length()<=4)
			{
				int num = 0;
				bool flag = false;
				for (int j = 0; j < 13; j++)
				{
					if (stringEqual(input[i], arr1[j])) { num = j; flag = true; break; }
				}
				while (!flag)
				{
					for (int j = 0; j < 12; j++) {
						if (stringEqual(input[i],arr2[j]))
						{
							num = 13 * (j + 1);
							flag = true;
							break;
						}
					}
					break;
				}
				printf("%d\n", num);
			}
			else
			{
				int spacePos = input[i].find(' ');
				string str1 = input[i].substr(0, spacePos);
				string str2 = input[i].substr(spacePos + 1, input[i].size());
				int num = 0;
				for (int j = 0; j < 12; j++)
				{
					if (stringEqual(str1,arr2[j]))
					{
						num += 13 * (j + 1);
					}
				}
				for (int j = 0; j < 13; j++)
				{
					if (stringEqual(str2,arr1[j]))
					{
						num += j;
					}
				}
				printf("%d\n", num);
			}
		}
	}
	
    return 0;
}

