// 1034.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;
long long gcd(long long a, long long b) {
	long long m;
	m = a%b;
	while (m)
	{
		a = b;
		b = m;
		m = a%b;
	}
	return b;
}

void PrintFraction(long long a, long long b) {
	
	int k = 1;
	if (b==0)
	{
		cout << "INF";
		return;
	}
	if (a==0)
	{
		cout << "0";
		return;
	}
	if (a<0)
	{
		a = -a;
		k = -1;
	}
	long long g = gcd(a, b);
	a /= g;
	b /= g;
	if (a/b==0&&a!=0)
	{
		if (k < 0) {
			cout << "(-" << a << "/" << b << ")";
		}
		else
		{
			
			cout << a << "/" << b;
		}
		return;
	}
	k *= (a / b);
	a = a%b;
	if (a==0)
	{
		if (k < 0) {
			cout << "(" << k << ")";
		}
		else
		{
			cout << k;
		}
	}
	else
	{
		if (k < 0) {
			cout << "(" << k <<" "<<a<<"/"<<b<< ")";
		}
		else
		{
			cout << k<< " " << a << "/" << b ;
		}
	}
	
}

namespace A {
	
	void plus(long long a1, long long b1, long long a2, long long b2) {
		long long a, b;
		a = a1*b2 + a2*b1;
		b = b1*b2;
		
			PrintFraction(a, b);
		
	}
	void minus(long long a1, long long b1, long long a2, long long b2) {
		long long a, b;
		a = a1*b2 - a2*b1;
		b = b1*b2;
		
			PrintFraction(a, b);
		
	}
	void multiply(long long a1, long long b1, long long a2, long long b2) {
		long long a, b;
		a = a1*a2;
		b = b1*b2;
		
			PrintFraction(a, b);
		
	}
	void divided(long long a1, long long b1, long long a2, long long b2) {
		long long a, b;
		a = a1*b2;
		b = b1*a2;
		if (a1*a2<0)
		{
			b = -b;
			a = -a;
		}
		
		
			PrintFraction(a, b);
		
	}
}

int main()
{
	long long a1, b1,a2,b2;
	
	scanf_s("%lld/%lld %lld/%lld", &a1, &b1,&a2,&b2);
	
	for (int i = 0; i < 4; i++)
	{
		
		PrintFraction(a1, b1);
		
		switch (i)
		{
		case 0:cout << " + "; break;
		case 1:cout << " - "; break;
		case 2:cout << " * "; break;
		case 3:cout << " / "; break;
		}
		
		PrintFraction(a2, b2);
		
		cout << " = ";

		switch (i)
		{
		case 0:A::plus(a1,b1,a2,b2); break;
		case 1:A::minus(a1,b1,a2,b2); break;
		case 2:A::multiply(a1,b1,a2,b2)  ; break;
		case 3:A::divided(a1, b1, a2, b2); break;
		}
		cout << endl;
	}

    return 0;
}

