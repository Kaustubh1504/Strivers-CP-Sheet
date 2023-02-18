#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	long long n,m,a;
	cin>>n>>m>>a;

	cout<<((n+a-1)/a)*((m+a-1)/a);
	return 0;
}