#include<bits/stdc++.h>
using namespace std;


int main()
{
    cin.tie(0); cout.tie(0); freopen("speeding.in", "r", stdin); freopen("speeding.out", "w", stdout);	
	int n,m;
	cin>>n>>m;
	vector<int> act(100);
	int start=0;
	for(int i=0;i<n;++i)
	{
	int len,lim;
	cin>>len>>lim;
	for(int j=start;j<start+len;++j)
	act[j]=lim;
	
	start=start+len;
	}
	start=0;
	vector<int> bail(100);
	for(int i=0;i<m;++i)
	{
	int x,y;
	cin>>x>>y;
	for(int j=start;j<start+x;++j)
	bail[j]=y;
	start+=x;
	}
	int coun=0;
	for(int i=0;i<100;++i)
	{
		coun=max(coun,bail[i]-act[i]);
	}
	cout<<coun;
	return 0;
}
