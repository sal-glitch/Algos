#include<bits/stdc++.h>
using namespace std;


int main()
{
   cin.tie(0); cout.tie(0); freopen("cowsignal.in", "r", stdin); freopen("cowsignal.out", "w", stdout);	
	int m,n,k;
	cin>>m>>n>>k;
	string s;
	vector<string> v;
	vector<string> ans;
	for(int i=0;i<m;++i)
	{
		cin>>s;
		v.push_back(s);
	}
	for(auto i:v)
	{
		for(int l=0;l<k;++l)
		{
		for(int p=0;p<n;++p)
		{for(int j=0;j<k;++j)
		cout<<i[p];
		}
		cout<<"\n";
	}
	}
	return 0;
}
