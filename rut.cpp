#include<bits/stdc++.h>
using namespace std;
struct interp{
	int c1,c2,time1,time2;
	bool operator < (const interp &p)  {
		if(time2==p.time2)
		{
			if(c1==p.c1)
			{
				if(c2==p.c2)
				return time1<p.time1;
				return c2<p.c2;
			}
			return c1<p.c1;
		}
		return time2<p.time2;
	}
};
int main()
{
	//cin.tie(0); cout.tie(0); freopen("angry.in", "r", stdin); freopen("angry.out", "w", stdout);
	int n;
	cin>>n;
	vector<char> dir(n);
	vector<int> x(n);
	vector<int> y(n);
	vector<interp> cross;
	for(int i=0;i<n;++i)
	{
		cin>>dir[i]>>x[i]>>y[i];
	}
	
	for(int i=0;i<n;++i)
	for(int j=i+1;j<n;++j)
	{
		if(dir[i]!=dir[j])
		{
			int a=i; int b=j;
			if(dir[a]=='N')
			swap(a,b);
			//now N is b, E is a
			if(x[a]<x[b] && y[a]>y[b])
			{
				int timea=x[b]-x[a], timeb=y[a]-y[b];
				if(timea>timeb)
				{
					cross.push_back({b,a,timeb,timea});
					
				}
				else if(timea<timeb) cross.push_back({a,b,timea,timeb});
			}
		}
	}
	sort(cross.begin(),cross.end());
	vector<int>stop(n,2e9);
	
	for(interp &i: cross)
	{
		if(i.time1<stop[i.c1] && i.time2<stop[i.c2])
		stop[i.c2]=i.time2;
		
		
	}
	for(int i=0;i<n;++i)
	if(stop[i]==2e9) cout<<"Infinity\n";
	else cout<<stop[i]<<"\n";
	return 0;
}
