#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	if(n%2!=0) cout<<0;
	else if(n%4==0) cout<<n/4-1;
	else cout<<n/4;
	return 0;
}