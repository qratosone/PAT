// 1043.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch;
	int P = 0, A = 0, T = 0, e = 0, s = 0, t = 0;
	while (scanf_s("%c", &ch) != EOF) {
		if (ch == 'P') ++P;
		else if (ch == 'A') ++A;
		else if (ch == 'T') ++T;
		else if (ch == 'e') ++e;
		else if (ch == 's') ++s;
		else if (ch == 't') ++t;
	}
	while (P>0 || A>0 || T>0 || e>0 || s>0 || t>0) {
		if (P>0) { printf_s("P"); --P; }
		if (A>0) { printf_s("A"); --A; }
		if (T>0) { printf_s("T"); --T; }
		if (e>0) { printf_s("e"); --e; }
		if (s>0) { printf_s("s"); --s; }
		if (t>0) { printf_s("t"); --t; }
	}

	
    return 0;
}

