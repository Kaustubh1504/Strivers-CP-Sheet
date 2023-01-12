#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++) cin>>arr[i];

	int mx=0;
	int mi=INT_MAX;
	int pmx=0,pmi=0;
	int ans=0;
	for(int i=0;i<n;i++){
		
		if(arr[i]<=mi) {
			mi=arr[i];
			pmi=i;

		}

	}
	for(int i=n-1;i>=0;i--){
		if(arr[i]>=mx) {
			mx=arr[i];
			pmx=i;
		}
	}
	//cout<<pmi<<pmx;
	if(pmx<=pmi){
       // ans=abs(pmx-0)+abs(pmi-n+1);
       ans = pmx-0 + n -1 - pmi;
	}else{
	   // ans=abs(pmx-0)+abs(pmi-n+1)-1;
	   ans = pmx-0 + n -1 - pmi -1;
	}

    cout<<ans;
	return 0;
}