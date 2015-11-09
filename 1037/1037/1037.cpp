// 1037.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include   <iostream>   

//是赋值以逗号为分隔符  
using   namespace   std;
int Knut(int g, int s, int k) {
	int total;
	total = k + s * 29 + g * 17 * 29;
	return total;
}
void output(int total) {
	
	int k = total % 29;
	int s = (total / 29) % 17;
	int g = total / (17 * 29);
	if (s<0)
	{
		s = -s;
	}
	if (k<0)
	{
		k = -k;
	}
	cout << g << "." << s << "." << k << endl;
}
int   main()
{
	int   a1, a2, a3,b1,b2,b3;
	cin >> a1; cin.ignore(1, ', ');
	cin >> a2; cin.ignore(1, ', ');
	cin >> a3; cin.ignore(1, ', ');
	cin >> b1; cin.ignore(1, ', ');
	cin >> b2; cin.ignore(1, ', ');
	cin >> b3; cin.ignore(1, ', ');
	int totalP = Knut(a1, a2, a3);
	int totalA = Knut(b1, b2, b3);
	int delta = totalA - totalP;
	output(delta);
	return   0;
}
