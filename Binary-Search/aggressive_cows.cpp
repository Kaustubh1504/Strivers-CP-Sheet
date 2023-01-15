#include<bits/stdc++.h>
using namespace std;
bool canBePlaced(int arr[],int n,int cows,int distance){
	int coordinate=arr[0]; //position of last placed cow
	int count=1;    // no of cows placed
	for(int i=0;i<n;i++){
		if(arr[i]-coordinate>=distance)//we can place the next cow here at ith position
		{
			count++;
			coordinate=arr[i];
		}

		if(count==cows) return true;
	}

	return false;
}

int main(int argc, char const *argv[])
{
	int n,cows;
	cin>>n>>cows;

	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];

    int low=1;
    int high=arr[n-1]-arr[0];
    int ans=-1;

    while(low<=high){
    	int mid=low+(high-low)/2;

    	if(canBePlaced(arr,n,cows,mid)){
    		ans=mid;
    		low=mid+1;
    	}else{
    		high=mid-1;
    	}
    }

    cout<<ans;
	return 0;
}