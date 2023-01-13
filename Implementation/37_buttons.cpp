#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int ans=0;
	for(int i=1;i<n;i++) ans+=i*(n-i);
	ans+=n;
	
	cout<<ans;
	return 0;
}