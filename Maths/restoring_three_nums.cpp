#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long x,y,z,w;
	cin>>x>>y>>z>>w;
	long long mx=max(max(x,y),max(z,w));

	long long a,b,c,d;
    a=mx-x;
    b=mx-y;
    c=mx-z;
    d=mx-w;

    if(a!=0) cout<<a<<" ";
    if(b!=0) cout<<b<<" ";
    if(c!=0) cout<<c<<" ";
    if(d!=0) cout<<d<<" ";


	return 0;
}