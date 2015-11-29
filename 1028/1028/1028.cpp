// 1028.cpp : �������̨Ӧ�ó������ڵ㡣
//
//ĳ��������˿��ղ飬�õ���ȫ���������ա�������д�������ҳ��������곤����������ˡ�
//
//����ȷ��ÿ����������ڶ��ǺϷ��ģ�����һ���Ǻ���ġ���������֪����û�г���200������ˣ�
//��������2014��9��6�գ����Գ���200������պ�δ���������ն��ǲ�����ģ�Ӧ�ñ����˵���
//
//�����ʽ��
//
//�����ڵ�һ�и���������N��ȡֵ��(0, 105]�����N�У�ÿ�и���1���˵��������ɲ�����5��Ӣ����ĸ��ɵ��ַ�������
//�Լ�����yyyy / mm / dd�������� / �� / �գ���ʽ���������ա���Ŀ��֤���곤�����������û�в��С�
//
//�����ʽ��
//
//��һ����˳�������Ч���յĸ��������곤�˺��������˵�����������Կո�ָ���
#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
class elder {
public:
	string name;
	int yy;
	int mm;
	int dd;
	elder(string person, int year, int month, int day) {
		name = person;
		yy = year;
		mm = month;
		dd = day;
	}
	bool judge() {
		if (yy>2014)
			return false;
		if (yy == 2014 && mm>9)
			return false;
		if (yy == 2014 && mm == 9 && dd>6)
			return false;
		if (yy<1814)
			return false;
		if (yy == 1814 && mm<9)
			return false;
		if (yy == 1814 && mm == 9 && dd<6)
			return false;
		return true;
	}
	bool sameDay(elder toad) {
		if (yy==toad.yy&&dd==toad.dd&&mm==toad.mm)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool TooYoung(elder toad) {  //����ȸ����������true
		if (yy<toad.yy)
		{
			return false;
		}
		if (yy==toad.yy&&mm<toad.mm)
		{
			return false;
		}
		if (yy==toad.yy&&mm==toad.mm&&dd<toad.dd)
		{
			return false;
		}
		return true;
	}
};
int main()
{
	int n;
	cin >> n;
	vector<elder> Vlist;
	string name=" ";
		int yy=0;
		int mm=0;
		int dd=0;
	for (int i = 0; i < n; i++)
	{
		cin >> name;
		scanf_s("%d/%d/%d",  &yy, &mm, &dd);
		elder temp(name, yy, mm, dd);
		if (temp.judge())
		{
			Vlist.push_back(temp);
		}
	}
	int ToadNum = 0;
	int SharonNum = 0;

	
	
	if (Vlist.size())
	{
		cout << Vlist.size() << " ";
		for (int i = 0; i < Vlist.size(); i++)
			{
				if (Vlist[ToadNum].TooYoung(Vlist[i])) //����ȸ��곤����¸�
				{
					ToadNum = i;
				}
				if (Vlist[i].TooYoung(Vlist[SharonNum])) //������ű�������������ű���
				{
					SharonNum = i;
				}
			}
		cout << Vlist[ToadNum].name << " " << Vlist[SharonNum].name;
	}
	else
	{
		cout << endl;
	}
    return 0;
}

