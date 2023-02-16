#include<bits/stdc++.h>
using namespace std;

int  main(int  argc, char const *argv[])
{
	long long n,m,k;
	cin>>n>>m>>k;
	long long arr[n];
	for(long long i=0;i<n;i++) cin>>arr[i];

	sort(arr,arr+n);
	
	long long  last=arr[n-1];
	long long  slast=arr[n-2];

	long long  e = m/(k+1);

	long long  ans = (m-e)*last + e*slast;

	cout<<ans;

	return 0;
}