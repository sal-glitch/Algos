#include<bits/stdc++.h>
using namespace std;


int main()
{

   long long int t;
   cin>>t;
   while(t--)
   {
   	long long int n,k;
   	cin>>n>>k;
   	vector<long long> v(n+1,0);
   	long long int i;
   	for( i=0;i<n;++i) cin>>v[i];
   	if(n==1) {
	   cout<<-1<<"\n";
	   continue;
	   }
	   else if(n==2)
	   {
	   	if(v[1]<=v[0]) cout<<-1<<"\n";
	   	else cout<<1<<"\n";
	   	continue;
	   }

   		for(long long int j=n-2;j>=0;--j)
   		{
   			if(v[j+1]>v[j]&&v[j+1]<=v[j]+k-1) {
			   v[j]=v[j+1];
			   }
		}
		for(int i=0;i<n;++i) cout<<v[i];
	for(i=0;i<n-1;++i)
	{
		if(v[i+1]>v[i]) {
			   ++v[i];
			   break;
			   }
	}

	if(i<n-1) 
	 cout<<i+1<<"\n";
	 else cout<<-1<<"\n";
   	
   }
   
   return 0;
   
}
