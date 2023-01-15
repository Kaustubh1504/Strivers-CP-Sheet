#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,target;
	cin>>n>>target;

	int arr[n];

	for(int i=0;i<n;i++) cin>>arr[i];

	int low=0;
	int high=n-1;
	int ans=-1;

	while(low<=high){
		int mid=low + (high-low)/2;
		if(arr[mid]==target){
			ans=mid;
			break;
		}

		//check if left half is sorted
		if(arr[low]<=arr[mid]){
			if(arr[low]<=target && arr[mid]>=target){
				high=mid-1;
			}else{
				low=mid+1;
			}

		}else{
			//right half is sorted

			if(arr[mid]<=target && arr[high]>=target ){
				low=mid+1;
			}else{
				high=mid-1;
			}
		}
	}

	cout<<ans;
	return 0;
}