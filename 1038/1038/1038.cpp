// 1038.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int countNum(vector<int> v, int s) {
	vector<int>::iterator iter=find(v.begin(), v.end(), s);
	int count = 0;
	while ((*iter) == s) {
		count++;
		iter++;
	}
	return count;
}
int main()
{
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	int m;
	cin >> m;
	vector<int>b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < m; i++) {
		int num = countNum(a,b[i]);
		cout << num << " ";
	}
	cout << endl;
    return 0;
}

