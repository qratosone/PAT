// 1025.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <memory.h>
#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <cstdio>
using namespace std;
class node {
public:
	int address;
	int data;
	int next;
	
};

int addr[100005];
int main()
{
	int  init,  list;
	memset(addr, -1, sizeof(addr));
	int n;
	vector<node> vInput;
	cin >> init >> n >> list;
	int count = 0;
	vInput.clear();
	for (int i = 0; i < n; i++)
	{
		node temp;
		cin >> temp.address>>temp.data>>temp.next;
		vInput.push_back(temp);
		addr[temp.address]=count++;
	}
	vector<node>linkNode;
	int p = init;
	for (int i = 0; i < n; i++)
	{
		int pos = addr[p];
		node temp = vInput[pos];
		linkNode.push_back(temp);
		p = temp.next;
		if (p == -1)break;
	}
	int time = linkNode.size() / list;
	for (int i = 0; i < time; i++)
	{
		reverse(linkNode.begin()+i*list, linkNode.begin()+i*list+list);
	}
	for (int i = 0; i < linkNode.size(); i++)
	{
		if (i==linkNode.size()-1)
		{
			printf("%05d %d -1", linkNode[i].address, linkNode[i].data);
		}
		else
		{
			printf("%05d %d %05d", linkNode[i].address, linkNode[i].data, linkNode[i + 1].address);
		}
		cout << endl;
	}

    return 0;
}

