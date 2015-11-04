// 1041.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *numT = new int[n];
	int *numExam = new int[n];
	string *ID = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ID[i] >> numT[i] >> numExam[i];
	}
	
	int m;
	cin >> m;
	int *number = new int[m];
	for (int i = 0; i < m; i++)
	{
		cin >> number[i];			
	}
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			if (numT[j]==number[i])
			{
				cout << ID[j] <<" "<< numExam[j] << endl;
			}
		}
	}
	delete numT, number, numExam, ID;
    return 0;
}

