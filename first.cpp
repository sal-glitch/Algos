#include<bits/stdc++.h>
using namespace std;


int main()
{
    cin.tie(0); cout.tie(0); freopen("shell.in", "r", stdin); freopen("shell.out", "w", stdout);	
	int n;
	cin>>n;
	int m=INT_MIN;
	int a,b,c;
	int ar[3],br[3],cr[3];
	ar[0]=1;ar[1]=2;ar[2]=3;
	br[0]=1;br[1]=2;br[2]=3;
	cr[0]=1;cr[1]=2;cr[2]=3;
	int count=0,count1=0,count2=0;
		while(n--)
	{
		cin>>a>>b>>c;
		swap(ar[a-1],ar[b-1]);
		swap(br[a-1],br[b-1]);
		swap(cr[a-1],cr[b-1]);
		if(ar[c-1]==1) count++;
		if(br[c-1]==2) count1++;
		if(cr[c-1]==3) count2++;
	}

m=max(max(count,count1),count2);
cout<<m;
	return 0;
}
