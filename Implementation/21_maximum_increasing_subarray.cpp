#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int arr[n+1];
	for(int i=0;i<n;i++) cin>>arr[i];

	int ctr=0;
	int mctr=0;
	for(int i=0;i<n;i++){
		if(arr[i]<arr[i+1]){
			ctr++;
		}else{
			ctr=0;
		}

		mctr=max(mctr,ctr);
	}

	cout<<mctr;
	return 0;
}