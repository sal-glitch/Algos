#include<bits/stdc++.h>
using namespace std;


int main()
{	
   long long int n;
   cin>>n;
   while(n--)
   {
   	long long int a,b;
   	cin >>a>>b;
   	string s;
   	cin>>s;
   	long long int r=0,u=0,d=0,l=0;
   	int f=0;
   	for(long long int i=0;i<s.length();++i)
   	{
	   if(s[i]=='U')
	   {
	   	++u;
		}
		else if(s[i]=='R'){
			++r;
		}   
		else if(s[i]=='L')
		{
			++l;
		}
		else {
			++d;
		}
		if(u>=b && b>=-d && a>=-l && a<=r)
		f=1;		
	}
	if(f==1) cout<<"YES\n";
	else cout<<"NO\n";
   }
   
   return 0;
   
}
