#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		int arr[2*n+1];
		for(int i=0;i<2*n;i++) cin>>arr[i];
		sort(arr,arr+2*n);
		cout<<abs(arr[n]-arr[n-1])<<"\n";
	}
	return 0;
}