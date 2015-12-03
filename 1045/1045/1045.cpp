// 1045.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>input;
	vector<int>Vsort;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		input.push_back(temp);
		Vsort.push_back(temp);
	}
	sort(Vsort.begin(), Vsort.end());
	int count = 0;
	vector<int>output;
	int vmax = -1;
	for (int i = 0; i < n; i++)
	{
		if (input[i] > vmax)vmax = input[i];
		if (input[i]==Vsort[i]&&input[i]==vmax)
		{
			count++;
			output.push_back(input[i]);
		}
	}
	cout << count << endl;
	for (int i = 0; i < output.size(); i++)
	{
		if (i == 0) {
			cout << output[i];
		}
		else {
			cout << " " << output[i];
		}
	}
	cout << endl;

    return 0;
}

