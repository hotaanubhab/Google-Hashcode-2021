#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(v) v.begin(), v.end()
#define mp(x, y) make_pair(x, y)
#define mem(a, val) memset(a, val, sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

int in_array(string value, string *array)
{
    int size = (*array).size();
    for (int i = 0; i < size; i++)
    {
        if (value == array[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
	int D;
	int I;
	int S;
	int V;
	int F;
	cin>>D>>I>>S>>V>>F;
			pii id[S];
		string n[S];
		vvi path;
	for(int i=0;i<S;i++)
	{
		cin>>id[i].f;
		cin>>id[i].s;
		cin>>n[i];

	}
	for(int i=0;i<V;i++)
	{
		int p;
		cin>>p;
		vector<int> temp_path;
		for(int j=0;j<p;j++)
		{
			
			string k;
			cin>>k;
			int temp_route  = in_array(k, n);
			temp_path.push_back(temp_route);
		}
		path.push_back(temp_path);
	}

  
    return 0;
}
