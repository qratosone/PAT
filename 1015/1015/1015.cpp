// 1015.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
class student {
public:
	int ID;
	int moral;
	int talent;
	void output() {
		printf("%d %d %d\n", ID, moral, talent);
	}
};
bool cmp(student s1, student s2) {
	int total1 = s1.moral + s1.talent;
	int total2 = s2.moral + s2.talent;
	if (total1!=total2)
	{
		return total1 > total2;
	}
	else
	{
		if (s1.moral!=s2.moral)
		{
			return s1.moral > s2.moral;
		}
		return s1.ID < s2.ID;
	}
}
int main()
{
	int n, l, h;
	cin >> n >> l >> h;
	vector<student>v1;
	vector<student>v2;
	vector<student>v3;
	vector<student>v4;
	for (int i = 0; i < n; i++)
	{
		int t1;
		int  t2, t3;
		student ts;
		scanf_s("%d %d %d", &t1, &t2, &t3);
		ts.ID=t1;
		ts.moral = t2;
		ts.talent = t3;
		if (t2>=h&&t3>=h)
		{
			v1.push_back(ts);
		}
		else if(t2>=l&&t3>=l)
		{
			if (t2>=h&&t3<h)
			{
				v2.push_back(ts);
			}
			else if (t2>=t3)
			{
				v3.push_back(ts);
			}
			else
			{
				v4.push_back(ts);
			}
		}
	}
	int count = v1.size()+v2.size()+v3.size()+v4.size();
	sort(v1.begin(), v1.end(), cmp);
	sort(v2.begin(), v2.end(), cmp);
	sort(v3.begin(), v3.end(), cmp);
	sort(v4.begin(), v4.end(), cmp);
	cout << count << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		v1[i].output();
	}
	for (int i = 0; i < v2.size(); i++)
	{
		v2[i].output();
	}
	for (int i = 0; i < v3.size(); i++)
	{
		v3[i].output();
	}
	for (int i = 0; i < v4.size(); i++)
	{
		v4[i].output();
	}
    return 0;
}

