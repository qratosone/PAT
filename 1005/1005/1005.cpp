// 1005.cpp : �������̨Ӧ�ó������ڵ㡣
//
//�����n = 3������֤��ʱ��������Ҫ����3��5��8��4��2��1��
//�����Ƕ�n = 5��8��4��2������֤��ʱ�򣬾Ϳ���ֱ���ж������Ȳ������α��
//������Ҫ�ظ����㣬��Ϊ��4�����Ѿ�����֤3��ʱ���������ˣ����ǳ�5��8��4��2�Ǳ�3�����ǡ�������
//���ǳ�һ�������е�ĳ����nΪ���ؼ����������n���ܱ������е��������������ǡ�
#include "stdafx.h"
#include <iostream>
#include<vector>
#include <cstring>  //memsetͷ�ļ�
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
	for (int i = 0; i < n; i++) //����
	{
		cin >> temp;
		input.push_back(temp);
	}
	for (int i = 0; i < input.size(); i++)   //����ÿһ��input��������3n+1��Ȼ���¼ÿһ���������е�temp
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
			f[tmp] = 1; //��temp��¼������������
		}
	}
	for (int i = 0; i < input.size(); i++)
	{
		if (!f[input[i]])output.push_back(input[i]); //�������������û�о��ǹؼ���
	}
	/*����sort(begin, end, less<data - type>());
	����sort(begin, end, greater<data - type>()).*/
	sort(output.begin(), output.end(), greater<int>());
	cout << output[0];
	for (int i = 1; i < output.size(); i++)
	{
		cout << " " << output[i];
	}
    return 0;
}

