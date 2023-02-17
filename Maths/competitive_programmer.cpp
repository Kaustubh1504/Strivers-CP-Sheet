#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	// while(t--){
	// 	long long n;
	// 	cin>>n;
	// 	int even=0;
	// 	int sum=0;
	// 	int zero=0;
	// 	while(n>0){
	// 		int rem = n%10;
	// 		sum+=rem;
	// 		if(rem%2==0) even++;
	// 		if(rem==0) zero++;

	// 		n=n/10;
	// 	}

	// 	if(sum%3==0 && even>0 && zero>0){
	// 	 cout<<sum<<" "<<even<<" "<<zero<<" " ;
	// 	 cout<<"red";
	// 	}
	// 	else {
	// 		cout<<sum<<" "<<even<<" "<<zero<<" " ;
	// 		cout<<"cyan";}

	// 	cout<<endl;
	// }
	while(t--){
		string s;
		cin>>s;
		int sum=0;
		int even=0;
		int zero=0;

		for(auto e: s){
			int t=e-48;
			// cout<<t<<endl;
			sum+=t;
			if(t%2==0 ) even++;
			if(t==0) zero++;


		}

			if(sum%3==0 && even>=2 && zero>=1 ){
			 //cout<<sum<<" "<<even<<" "<<zero<<" " ;
			 cout<<"red";
			}
			else {
			//cout<<sum<<" "<<even<<" "<<zero<<" " ;
			cout<<"cyan";
			}

			cout<<endl;
	}
	return 0;
}