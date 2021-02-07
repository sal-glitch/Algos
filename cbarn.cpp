#include<bits/stdc++.h>
using namespace std;


int main()
{
   cin.tie(0); cout.tie(0); freopen("cbarn.in", "r", stdin); freopen("cbarn.out", "w", stdout);	
   int n;
   cin>>n;
   vector<int> v(n,0);
   int c=0;
   for(int i=0;i<n;++i)
   {
   cin>>v[i];
   c+=v[i];
   }
   int sol=INT_MAX;
   for(int i=0;i<n;++i)
   {
   	int cur=0; int curc=c;
   	for(int j=0;j<n;++j)
   	{
   		curc-=v[(i+j)%n];
   	cur+=curc;	
	}
	   sol=min(sol,cur);
   }
   cout<<sol;
   return 0;
   
}
