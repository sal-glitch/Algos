#include<bits/stdc++.h>
using namespace std;


int main()
{
    //cin.tie(0); cout.tie(0); freopen("shuffle.in", "r", stdin); freopen("shuffle.out", "w", stdout);	
	int x,y;
	long long int dis=0;
	cin>>x>>y;
	int sign=1;
	int mag=1;
	while(1)
	{
		if((sign==1 && x<=y && x+mag>=y)||(sign==-1&&x>=y&&x-mag<=y))
		{
			dis+=abs(y-x);
			cout<<dis;
			return 0;
		}
		else
		{
		dis+=2*mag;
		sign=sign*-1;
		mag=mag*2;
		}
	
	}
	cout<<dis;
	return 0;
}
