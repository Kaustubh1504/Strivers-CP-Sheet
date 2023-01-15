#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,k;
	cin>>n>>m>>k;
	int arr1[n];
	int arr2[m];

	for(int i=0;i<n;i++) cin>>arr1[i];
	for(int i=0;i<m;i++) cin>>arr2[i];

	//int s = min(n,m);

	int low=0;
	int high=n;
	int ans = -1;
	while(low<=high){
		int mid = low + (high-low)/2;

		int cut1= mid;
		int cut2= k-cut1;

		int l1=arr1[cut1-1];
		int l2=arr2[cut2-1];

		int r1=arr1[cut1];
		int r2=arr2[cut2];

		if(l1<=r2 && l2<=r1){
			ans=max(l1,l2);
			break;
		}else if(l1>r2){
			high=mid-1;
		}else{
			low=mid+1;
		}
	}

	cout<<ans;


	return 0;
}