// 1032.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
void searchMax(vector<int> v) {
	int maxScore = 0;
	int maxNum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i]>maxScore)
		{
			maxScore = v[i];
			maxNum = i;
		}
	}
	cout << maxNum << " " << maxScore;
}
int main()
{
	int n;
	cin >> n;
	vector<int> score(n+1);
	int num, getScore;
	for (int i = 1; i < n+1; i++)
	{
		score[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> num >> getScore;
		score[num] += getScore;
	}
	searchMax(score);
    return 0;
}

