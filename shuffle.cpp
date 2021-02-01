#include<bits/stdc++.h>
using namespace std;


int main()
{
    cin.tie(0); cout.tie(0); freopen("shuffle.in", "r", stdin); freopen("shuffle.out", "w", stdout);	
	long long int n;
	cin>>n;
	vector<int> pos(n,0);
	vector<int> id(n,0);
	
	for(int i=0;i<n;++i) cin>>pos[i];
	for(int i=0;i<n;++i) cin>>id[i];
	vector<int> x(n,0);
	for(int i=0;i<3;++i)
	{
		for(int j=0;j<n;++j) x[j]=id[pos[j]-1];
		for(int j=0;j<n;++j) id[j]=x[j];
	}
	for(int i=0;i<n;++i)
	cout<<id[i]<<"\n";
	return 0;
}
