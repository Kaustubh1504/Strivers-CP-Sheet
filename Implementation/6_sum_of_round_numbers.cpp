#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<int> ans;

		int i=0;

		while(n!=0){
			int rem = n%10;
			n=n/10;
			if(rem!=0){
				for(int j=0;j<i;j++){
				rem=rem*10;
			    }

			    ans.push_back(rem);
			}
			
			i++;
		}
		cout<<ans.size()<<"\n";
		for(auto e: ans){
			cout<<e<<" ";
		}
		cout<<"\n";



	}
	return 0;
}