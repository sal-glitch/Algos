#include<bits/stdc++.h>
using namespace std;
int a[2002][2002];
int main()
{
	cin.tie(0); cout.tie(0); freopen("mowing.in", "r", stdin); freopen("mowing.out", "w", stdout);	
	int n;
	cin>>n;
	vector<pair<char,int>> v(n);
	for(int i=0;i<n;++i)
	{
		cin>>v[i].first>>v[i].second;
	}
	
	for(int i=0;i<2002;++i)
	for(int j=0;j<2002;++j)
	a[i][j]=0;
	int x=1000,y=1000;
	int steps=0;
	int mx=INT_MAX;
	
	for(int i=0;i<n;++i)
	{
		if(v[i].first=='W')
		{
			for(int j=0;j<v[i].second;++j)
		{
			steps+=1;
			y-=1;
			if(a[x][y]==0) a[x][y]=steps;
			else {
			a[x][y]=steps-a[x][y];
			if(mx>a[x][y]) mx=a[x][y];
			a[x][y]=steps;
			}
			
		}
			
		}
		else if(v[i].first=='E')
		{
				for(int j=0;j<v[i].second;++j)
		{
			steps+=1;
			y+=1;
		    if(a[x][y]==0) a[x][y]=steps;
			else {
			a[x][y]=steps-a[x][y];
			if(mx>a[x][y]) mx=a[x][y];
			a[x][y]=steps;
			}
			
		}
		
		    
		}
		else if(v[i].first=='N')
		{
				for(int j=0;j<v[i].second;++j)
		{
			steps+=1;
			x+=1;
			if(a[x][y]==0) a[x][y]=steps;
			else {
			a[x][y]=steps-a[x][y];
			if(mx>a[x][y]) mx=a[x][y];
			a[x][y]=steps;
			}
		}
			
		}
		else {
				for(int j=0;j<v[i].second;++j)
		{
			steps+=1;
				x-=1;
			if(a[x][y]==0) a[x][y]=steps;
			else {
			a[x][y]=steps-a[x][y];
			if(mx>a[x][y]) mx=a[x][y];
			a[x][y]=steps;
			}
			
		}
		
		}
		

	}  
	if(mx!=INT_MAX)
	cout<<mx;
	else cout<<-1;
    return 0;
}
