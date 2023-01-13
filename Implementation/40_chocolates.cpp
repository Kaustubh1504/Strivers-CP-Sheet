#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	long long arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];

	int l=n-1;
    
    long long ans = arr[l];
    //cout<<ans;
   
	for(int i=l-1;i>=0;i--){

		long long add=0;
		if(arr[i]>=arr[i+1]){
			add=arr[i+1]-1;
			if(add<0) add=0;
			arr[i]=add;
		}
		else{
			add=arr[i];
		}

		ans+=add;

		//cout<<add<<" ";
		//cout<<ans<<" "; 


	}

	cout<<ans;
	return 0;
}