// 1009.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stack>
using namespace std;

int main()
{
	stack<string> s;
	string str;
	while (cin>>str)
	{
		s.push(str);
	}
	if (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	while (!s.empty())
	{
		cout << " " << s.top();
		s.pop();
	}
	
    return 0;
}

