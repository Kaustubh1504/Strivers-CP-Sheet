#include<bits/stdc++.h>
using namespace std;

void reverse(int l,int r,int arr[]){

	if(l>=r) return;
	swap(arr[l],arr[r]);
	reverse(l+1,r-1,arr);
}

int main(int argc, char const *argv[])
{
	/* code */
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);

	reverse(0,n-1,arr);

	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	return 0;
}