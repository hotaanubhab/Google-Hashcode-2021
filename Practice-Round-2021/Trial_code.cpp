#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,t2,t3,t4;
	cin>>m>>t2>>t3>>t4;
	vector<int> v;
	
	int sum = 0;
	int x2,x3,x4;
	
	
	vector<int> x;
	for(int i = 0;i<=t2;i++)
	{
		for(int j=0;j<=t3;j++)
		{
			for(int k = 0;k<=t4;k++)
			{
				int s = 2*i+3*j+4*k;
				
				if(s>sum && s<=m)
				{
					
					sum = s;
					x2 =i;
					x3=j;
					x4=k;
				}
			}
		}
	}
	cout<<x2+x3+x4<<endl;
	int lol = m-1;
	for(int i = 0;i<x2;i++)
	{
		cout<<2<<" "<<lol--<<" "<<lol--<<endl;
	}
	for(int i = 0;i<x3;i++)
	{
		cout<<3<<" "<<lol--<<" "<<lol--<<" "<<lol--<<endl;
	}
	for(int i = 0;i<x4;i++)
	{
		cout<<4<<" "<<lol--<<" "<<lol--<<" "<<lol--<<" "<<lol--<<endl;
	}
}