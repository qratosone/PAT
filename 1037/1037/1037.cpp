// 1037.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include   <iostream>   

//�Ǹ�ֵ�Զ���Ϊ�ָ���  
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
