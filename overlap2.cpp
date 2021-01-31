#include<bits/stdc++.h>
using namespace std;

long long int overlap(long long int x1,long long int y1,long long int x2,long long int y2, long long int x3, long long int y3, long long int x4,long long int y4)
{
long long int a=min(x2,x4)-max(x1,x3);
long long int b=min(y2,y4)-max(y1,y3);
if(a<0) a=0;
if(b<0) b=0;
return a*b;
}
int main()
{
//cin.tie(0); cout.tie(0); freopen("billboard.in", "r", stdin); freopen("billboard.out", "w", stdout);
long long int x1,x2;
long long int y1,y2;
long long int wx1,wx2,wy1,wy2;
cin>>wx1>>wy1>>wx2>>wy2;
cin>>x1>>y1>>x2>>y2;
long long int x3,y3,x4,y4;
cin>>x3>>y3>>x4>>y4;

long long int wb1,bb,wb2;

wb1=overlap(wx1,wy1,wx2,wy2,x1,y1,x2,y2);
wb2=overlap(wx1,wy1,wx2,wy2,x3,y3,x4,y4);

long long int bbprex2=min(x2,x4);long long int bbprex1=max(x1,x3);
long long int bbprey2=min(y2,y4);long long int bbprey1=max(y1,y3);
bb=overlap(wx1,wy1,wx2,wy2,bbprex1,bbprey1,bbprex2,bbprey2);
if(wb1+wb2-bb==((wy2-wy1)*(wx2-wx1))) cout<<"NO";
else cout<<"YES";

return 0;
}
