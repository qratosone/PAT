// 1042.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

bool isAlphabet(char &c) {
	if (c>='a'&&c<='z')
	{
		return true;
	}
	if (c>='A'&&c<='Z')
	{
		c = c - 'A' + 'a';
		return true;
	}
	return false;
}

int main()
{
	string s;
	getline(cin, s);
	int MaxFrequency = 0;
	char MaxChar = 'z';
	map<char, int> frequency;
	for (int i = 0; i < s.length(); i++)
	{
		if (isAlphabet(s[i]))
		{
			frequency[s[i]]++;
		}
	}
	map<char, int>::iterator it;
	for (it=frequency.begin(); it!=frequency.end(); ++it)
	{
		if (it->second > MaxFrequency) {
			MaxFrequency = it->second;
			MaxChar = it->first;
		}
	}
	cout << MaxChar << " " << MaxFrequency;
    return 0;
}

