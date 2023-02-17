#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[]={1,2,3,4,5,6};
	while(n--){
		long long x;
		cin>>x;

		// long long noofdiceMinusOne=x/21;
		// long long summiusone = 14*noofdiceMinusOne;
		long long noofdice = x/14;
		long long sum = noofdice*14;

		bool canMake=false;
		for(auto e: arr){
			if(sum+e==x){
				canMake=true;
				break;
			}
		}

		if(canMake && noofdice>0) cout<<"YES";
		else cout<<"NO";
		cout<<endl;




	}
	return 0;
}