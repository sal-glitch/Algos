#include<bits/stdc++.h>
using namespace std;

static bool cmp(pair<int,int> a,pair<int,int> b)
{
	if(a.first==b.first) return a.second<=b.second;
	else return a.first<b.first;
}
int main()
{
	cin.tie(0); cout.tie(0); freopen("cowqueue.in", "r", stdin); freopen("cowqueue.out", "w", stdout);	
	int n;
	cin>>n;
	
	int a[n][2];
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;++i)
	cin>>v[i].first>>v[i].second;
	
	sort(v.begin(),v.end(),cmp);
	
	int time=0;
	for(int i=0;i<n;++i)
	{
		if(time>=v[i].first)
		time+=v[i].second;
		else 
		{
			time=v[i].second+v[i].first;
		}
		
	}
	cout<<time;
	return 0;
}
