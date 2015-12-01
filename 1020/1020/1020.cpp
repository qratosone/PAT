// 1020.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
class mooncake
{
public:
	mooncake() { stock = 0; price = 0; pricePerStock = 0; };
	~mooncake() {};
	double stock;
	double price;
	double pricePerStock;
	void setPrice(){
		pricePerStock = (double)price / stock;
	}
};
bool cmp(mooncake a, mooncake b) { //a<b升序，反之为降序
	if (a.pricePerStock>=b.pricePerStock)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int type;
	double requirement;
	cin >> type >> requirement;
	vector<mooncake> v;
	mooncake make;
	for (int i = 0; i < type; i++)
	{
		cin >> make.stock;
		v.push_back(make);
	}
	for (int i = 0; i < type; i++)
	{
		int temp;
		cin >> temp;
		v[i].price = temp;
		v[i].setPrice();
	}
	sort(v.begin(), v.end(), cmp);
	double maxIncome = 0.0;
	int count = 0;
	for (int i = 0; i < type; i++)
	{
		if (requirement > v[i].stock) {
			maxIncome += (double)v[i].price;
			requirement -= v[i].stock;
		}
		else
		{
			maxIncome += (double)requirement*v[i].pricePerStock;
			break;
		}
	}
	printf("%.2f\n", maxIncome);
    return 0;
}

