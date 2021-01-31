#include<bits/stdc++.h>
using namespace std;

long long int overlap(int x1,int y1,int x2,int y2, int x3, int y3, int x4,int y4)
{
	int a=min(x2,x4)-max(x1,x3);
	int b=min(y2,y4)-max(y1,y3);
	if(a<0) a=0;
	if(b<0) b=0;

	return a*b;
}

bool ok(int a,int b, int x1, int y1, int x2,int y2)
{
	return (a<x1 || a>x2||b<y1||b>y2);
}
int main()
{
    //cin.tie(0); cout.tie(0); freopen("billboard.in", "r", stdin); freopen("billboard.out", "w", stdout);	
	int x1,x2;
	int y1,y2;
	int wx1,wx2,wy1,wy2;
	cin>>wx1>>wy1>>wx2>>wy2;
	cin>>x1>>y1>>x2>>y2;
	int x3,y3,x4,y4;
	cin>>x3>>y3>>x4>>y4;
	wx1*=2;
	wx2*=2;
	wy1*=2;
	wy2*=2;
	x1*=2;x2*=2;x3*=2;x4*=2;
	y1*=2;y2*=2;y3*=2;y4*=2;

	for(int x=wx1; x<=wx2;++x)
	{
		if(ok(x,wy1,x3,y3,x4,y4)&& ok(x,wy1,x1,y1,x2,y2))
		{
			cout<<"YES"; return 0;
		}
		if(ok(x,wy2,x3,y3,x4,y4)&&ok(x,wy2,x1,y1,x2,y2))
		{
			cout<<"YES"; return 0;
		}
	}
	for(int y=wy1;y<=wy2;++y)
	{
		if(ok(wx1,y,x3,y3,x4,y4)&& ok(wx1,y,x1,y1,x2,y2))
		{
			cout<<"YES"; return 0;
		}

		if(ok(wx2,y,x3,y3,x4,y4)&& ok(wx2,y,x1,y1,x2,y2))
		{
			cout<<"YES"; return 0;
		}
	}
	cout<<"NO";
	return 0;
}
