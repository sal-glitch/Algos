#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,l;
	string s;
	cin>>n;
	int check;
	while(n--)
	{
		cin>>l;
		cin>>s;
		string ans="1";
		if(s[0]=='1') check=2;
		else check=1;
		for(int i=1;i<l;++i)
		{
			if(s[i]=='1')
			{
				if(check==2)
				{ans+='0'; check=1;
				}
				else {
					ans+='1'; check=2;
				}
			}
			else {
				if(check==1)
				{
					ans+='0'; check=0;
				}
				else{
					ans+='1';
					check=1;
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

