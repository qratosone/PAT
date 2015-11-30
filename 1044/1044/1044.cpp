// 1044.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
string arr1[13] = { "tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec" };
string arr2[12] = { "tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou" };
int main()
{
	int n;
	scanf_s("%d", &n);
	
	string mars;
	string input;
	vector<int> result(n); //1=int,0=string
	vector<int> earthNum;
	vector<string>marsNum;
	
	for (int i = 0; i <n+1 ; i++)
	{
		getline(cin, input);
		
		if (input[0]>='0'&&input[0]<='9')
		{
			int earth = 0;
			int count = 0;
			do
			{
				earth = earth * 10 + (input[count]-'0');
				count++;
			} while (count<input.size());
			if (earth<13)
			{
				cout << arr1[earth] << endl;
			}
			else
			{
				cout << arr2[earth / 13-1] << " "<<arr1[earth % 13]<<endl;
			}
		}
		else
		{
			string temp;
			
			for (int i = 0; i < input.length(); i++)
			{
				if (input[i]!=' ')
				{
                      temp.push_back(input[i]);
				}
				else
				{
					marsNum.push_back(temp);
					temp.clear();
					
				}
				
			};
			marsNum.push_back(temp);
			
			bool flag = false;
			for (int j=0; j<marsNum.size(); j++)
			{

			
				int number=0;
				for (int i = 0; i < 12; i++)
				{
					if (arr2[i] == marsNum[0])number = number + i * 13;
				}
				for (int i = 0; i < 13; i++)
				{
					if (arr1[i] == marsNum[1])number = number + i;
				}
				cout << number << endl;
			}
			
		}
		if (i == 0)marsNum.clear();
	}
    return 0;
}

