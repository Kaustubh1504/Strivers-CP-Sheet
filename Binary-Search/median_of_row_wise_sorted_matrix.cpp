#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;

	int arr[n][m];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>arr[i][j];
	}

	int low=1;
	int high=INT_MAX;

	int posOfMedian = (n*m +1)/2;  //ceil value

	while(low<=high){
		int mid=(low+high)/2;
        
		//check for the number of elements before mid
		int count=0;
		for(int i=0;i<n;i++){
			int l=0;                                      
			int h=m-1;                                   
			//binary search
			while(l<=h){
				int mi=(l+h)/2;
				if(arr[i][mi]>mid){
					h=mi-1;
				}else{
					l=mi+1;
				}
			}

			count=count+l;
		}

		if(count>posOfMedian){
			high=mid-1;
		}else {
			low=mid+1;
		}
	}

	cout<<low;



	


	return 0;
}
