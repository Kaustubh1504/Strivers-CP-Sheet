#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		int sum=0;
		int e=0;
		int o=0;

		for(int i=0;i<n;i++){
			int c;
			cin>>c;
			sum+=c;
			// if(c&1==0) e++;
			// else o++;
			if(c%2==0) e++;
			else o++;
			
		}

		// if(xr%2) cout<<"NO";
		// else cout<<"YES";

		if(sum&1!=0) cout<<"YES";
		else{
			if(e>=1 && o>=1) cout<<"YES";
			else cout<<"NO";
		}

		cout<<endl;
	}
	return 0;
}