#include<bits/stdc++.h>
using namespace std;


int main()
{
    cin.tie(0); cout.tie(0); freopen("mixmilk.in", "r", stdin); freopen("mixmilk.out", "w", stdout);	
	int c[3], a[3];
	for(int i=0;i<3;++i)
	cin>>c[i]>>a[i];
	int first=-1; int second=1;
	int amt;
	for(int i=0;i<100;++i)
	{
		first=(first+1)%3;
		second=(first+1)%3;
		amt=min(a[first],c[second]-a[second]);
		a[first]-=amt;
		a[second]+=amt;
	}
	cout<<a[0]<<"\n"<<a[1]<<"\n"<<a[2];
	return 0;
}
