#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int dtoast = k*l/nl;
	int ltoast = c*d;
	int stoast = p/np;

	int b = min(dtoast,ltoast);
	int a = min(b,stoast);

	int ans = a/n;

	cout<<ans;
	
	return 0;
}