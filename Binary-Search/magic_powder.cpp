#include<bits/stdc++.h>
using namespace std;
long long n,k;

bool canBake(long long x,long long requiredIng[],long long presentIng[]){
	//check by the required magic powder
	// max(0ll,required[i]*x-present[i]);
	long long magicNeeded[n];
	long long sum=0ll;

	for(long long i=0;i<n;i++){
		magicNeeded[i]=max(0ll,requiredIng[i]*x-presentIng[i]);
		sum=sum+magicNeeded[i];
		if(sum>k){
			return false;
		}
	}

	// for(long long i = 0 ;i<n;i++){
	// 	sum=sum+magicNeeded[i];
	// }

	// if(sum<=k) return true;
	// else return false;

	return true;



}

int main(int argc, char const *argv[])
{
	
	cin>>n>>k;
	long long requiredIng[n];
    long long presentIng[n];

	

	for(long long i=0;i<n;i++) cin>>requiredIng[i];
	for(long long i=0;i<n;i++) cin>>presentIng[i];

	long long low=0ll;
	long long high=1e15;
	long long ans=0ll;

	while(low<=high){
		long long mid = low +(high-low)/2;

		if(canBake(mid,requiredIng,presentIng)){
			ans=mid;
			low=mid+1;
		}else{
			high=mid-1;
		}
	}

	// if(canBake(low,requiredIng,presentIng)) cout<<low;
	// else cout<<high;

	cout<<ans;


	return 0;
}