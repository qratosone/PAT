// 1022.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <stack>
#define MAX 1000
using namespace std;
int main()
{
	long int  A, B;
	int D;
	cin >> A >> B >> D;
	long int total = A + B;
	stack<int> s;
	if (total == 0) {
		cout << 0;
	}
	while (total!=0)
	{
		int mod = total%D;
		s.push(mod);
		total /= D;
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	
    return 0;
}

