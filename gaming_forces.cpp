#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		int arr[n+1];
		int cntones=0;

		for(int i=0;i<n;i++){
			int c;
			cin>>c;
			arr[i]=c;
			if(c==1) cntones++;
		}
		int ans;
		if(cntones%2==0) {
			ans= cntones/2 + n-cntones;
		}
		else{
			ans= cntones/2 + cntones%2 + n-cntones;
		}

		cout<<ans<<endl;
	}
	return 0;
}