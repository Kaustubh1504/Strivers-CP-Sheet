#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int j;
	for(int i=0;i<=n;i++){
		//printing spaces
		// for(int k=i;k<2*n;k++) cout<<" ";
		// for(int k=2*n;k>=2*n-2*i;k--) cout<<" ";
		for(int k=0;k<2*(n-i);k++) cout<<" ";
		cout<<"0";
		for( j=1;j<=i;j++){
			cout<<" "<<j;
		}

		for( j=i-1;j>=0;j--){
			cout<<" "<<j;
		}
		cout<<"\n"; 
	}

	for(int i=n-1;i>=0;i--){

		for(int k=0;k<2*(n-i);k++) cout<<" ";
		cout<<"0";
		
		for( j=1;j<=i;j++){
			cout<<" "<<j;
		}

		for( j=i-1;j>=0;j--){
			cout<<" "<<j;
		}
		cout<<"\n";
	}
		return 0;
}
