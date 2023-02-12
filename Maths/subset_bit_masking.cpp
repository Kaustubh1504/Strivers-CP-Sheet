#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> arr(n,0);
	for(int i=0;i<n;i++){
	  cin>>arr[i];
	}
	vector<vector<int>> allsubset;
	int subset_cnt = (1<<n);

	for(int i=0;i<subset_cnt;i++){
		vector<int> subset;
		for(int j=31;j>=0;j--){
			if( ((i>>j)&1) ){
				subset.push_back(arr[j]);
				cout<<arr[j]<<" ";
			}
		}
		allsubset.push_back(subset);
		cout<<endl;

		
	}
	return 0;
}