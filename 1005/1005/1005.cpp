// 1005.cpp : 定义控制台应用程序的入口点。
//
//例如对n = 3进行验证的时候，我们需要计算3、5、8、4、2、1，
//则当我们对n = 5、8、4、2进行验证的时候，就可以直接判定卡拉兹猜想的真伪，
//而不需要重复计算，因为这4个数已经在验证3的时候遇到过了，我们称5、8、4、2是被3“覆盖”的数。
//我们称一个数列中的某个数n为“关键数”，如果n不能被数列中的其他数字所覆盖。
#include "stdafx.h"
#include <iostream>
#include<vector>
#include <cstring>  //memset头文件
#include <algorithm>
#include <functional>
using namespace std;
int f[100000];
vector<int> input;
vector<int> output;
int main()
{
	int n, i, temp;
	memset(f, 0, sizeof(int));
	cin >> n;
	for (int i = 0; i < n; i++) //输入
	{
		cin >> temp;
		input.push_back(temp);
	}
	for (int i = 0; i < input.size(); i++)   //对于每一个input的数，求3n+1，然后记录每一个求解过程中的temp
	{
		int tmp = input[i];
		while (tmp!=1)
		{
			if (tmp % 2 == 0) {
				tmp /= 2;
			}
			else
			{
				tmp = tmp * 3 + 1;
				tmp /= 2;
			}
			f[tmp] = 1; //把temp记录到覆盖序列中
		}
	}
	for (int i = 0; i < input.size(); i++)
	{
		if (!f[input[i]])output.push_back(input[i]); //如果覆盖序列里没有就是关键数
	}
	/*升序：sort(begin, end, less<data - type>());
	降序：sort(begin, end, greater<data - type>()).*/
	sort(output.begin(), output.end(), greater<int>());
	cout << output[0];
	for (int i = 1; i < output.size(); i++)
	{
		cout << " " << output[i];
	}
    return 0;
}

