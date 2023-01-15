#include<bits/stdc++.h>
using namespace std;
// 113
bool isPossible(int arr[],int barrier,int n,int k){
	int allotedStu=1,pages=0;
	for(int i=0;i<n;i++){
		if(arr[i]>barrier) return false;
		if(pages+arr[i]>barrier){
			allotedStu++;
			pages=arr[i];

		}else{
			pages=pages+arr[i];//12 46 113 
		}
	}

	if(allotedStu>k){
		return false;
	}else return true;
}

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;

	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];

	int low = arr[0];
	int sum=0;

	for(int i=0;i<n;i++) sum+=arr[i];

	int high=sum;
	
	while(low<=high){
		int mid=low+(high-low)/2;

		if(isPossible(arr,mid,n,k)){
			high=mid-1;
		}else{
			low=mid+1;
		}
	}

	cout<<low;

	return 0;
}