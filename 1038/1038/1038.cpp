// 1038.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[150] = { 0 };
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		arr[a[i]]++;
	}
	
	int m;
	cin >> m;
	vector<int>b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < m; i++) {
		int num = arr[b[i]];
		if (i==m-1)
		{
			cout << num;
		}
		else {
			cout << num << " ";
		}
	}

    return 0;
}

