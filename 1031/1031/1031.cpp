// 1031.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int weight[17]= { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char check[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
	int n;
	cin >> n;
	vector<string> input(n);
	vector<int>checkNum(n);
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];		
	}
	
	for (int i = 0; i <n; i++)
	{
		int checkCount = 0;	
		int j ;
		for ( j = 0; j < 17; j++)
		{
			if (input[i][j]<'0'||input[i][j]>'9')break;
			int temp =( input[i][j] - '0')*weight[j];
			checkCount +=temp;
		}
		checkCount = checkCount % 11;
		if (j < 16) { 
			checkNum[i] = 0;
		}
		else {
			char checkCode = input[i][17];
			if (check[checkCount]==checkCode)
			{
				checkNum[i] = 1;
			}
			else {
				checkNum[i] = 0;
			}
		}
	}
	bool all_passed = true;
	for (int i = 0; i < n; i++)
	{
		if (checkNum[i] == 0) {
			cout << input[i] << endl;
			all_passed = false;
		}
	}
	if (all_passed)
	{
		cout << "All passed" << endl;
	}
		

    return 0;
}

