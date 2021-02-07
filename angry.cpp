#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); cout.tie(0); freopen("angry.in", "r", stdin); freopen("angry.out", "w", stdout);
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;++i)
	cin>>v[i];
	sort(v.begin(),v.end());
	int res=-1;
	for(int i=0;i<n;++i)
	{
		int start=v[i];
		int cursol=1; int up=i+1; int down=i-1;int t=1;
		bool iup=true, idown=true;
		while(true)
		{
			
			bool irb=false, irup=false;
			int mas=v[up-1]+t;
			int menos=v[down+1]-t;
			while(down>=0 && v[down]>=menos && idown)
			{
				irb=true;down--;cursol++;
			}
			while(up<n &&v[up]<=mas&&iup)
			{
				irup=true;up++;cursol++;
			}
			if(!irb) idown=false;
			if(!irup) iup=false;
			if(!idown&&!iup)break;
			++t;
			
		}
		res=max(res,cursol);
	}
	cout<<res;
	return 0;
}
