// 1008.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num, shift, temp;
	cin >> num >> shift;
	vector<int> v;
	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	for (int i = 0; i < shift; i++)//����ÿ������ƶ�һλ���ƶ�shift��
	{
		temp = v[num - 1];
		for (int j =num-1 ; j >0; j--)
		{
			v[j] = v[j - 1];
		}
		v[0] = temp;
	}
	for (int i = 0; i < num; i++)
	{
		if (i==0)
		{
			cout << v[i];
		}
		else
		{
			cout << " " << v[i];
		}
	}
    return 0;
}

