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

int in_array(string value, vector<string> array,int size)
{
  
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
      vector<int> B;
      vector<int> E;
      vector<int> time;
    vector<string> n;
    vector<int> used;

    vvi path;
    for(int i=0;i<S;i++)
  {
    used.push_back(0);
  }
  for(int i=0;i<S;i++)
  {
    int temp;string k;
    cin>>temp;
    B.push_back(temp);
    cin>>temp;
    E.push_back(temp);
    cin>>k;
    n.push_back(k);
    cin>>temp;
    time.push_back(temp);
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
      int temp_route  = in_array(k, n,S);
      used[temp_route]=1;
      temp_path.push_back(temp_route);
    }
    path.push_back(temp_path);
  }

  
  int tt = 0,ti=0,tc=0;
  for(int i=0;i<I;i++)
  {
    
    for(int j=0;j<S;j++)
    {
      if(E[j]==i && used[j]==1){tc++;}
    }
    if(tc>0)
      { ti++;}
    tc=0;
   

  }
  cout<<ti<<endl;
  for(int i=0;i<I;i++)
  {
    
    for(int j=0;j<S;j++)
    {
      if(E[j]==i && used[j]==1){tc++;}
    }
    if(tc>0)
      { cout<<i<<endl;
        cout<<tc<<endl;}
    tc=0;
    for(int j=0;j<S;j++)
    {
      if(E[j]==i && used[j]==1){cout<<n[j]<<" "<<1<<endl;}
    }

  }
  /*while(tt<D)
  {
    cout<<ti<<endl;
    for(int j=0;j<S && tt<D;j++)
    {
      if(id[j].s==ti){tc++;tt++;}
    }
    cout<<tc<<endl;
    for(int j=0;j<tc;j++)
    {
      if(id[j].s==ti)cout<<n[j]<<" "<<1<<endl;
    }
  }*/
    return 0;
}
