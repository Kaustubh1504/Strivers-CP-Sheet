#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int ctr=0;
		int l=0,r=0,i;
		int ans=0;

		for(i=0;i<s.length();i++){
			if(s[i]=='1') break;
		}
		l=r=i;
		// while(r!=s.length()){
		// 	if(s[r]=='1'){
		// 		l=r;
		// 		ans+=ctr;
		// 		ctr=0;
		// 	}
		// 	if(s[r]=='0'){
		// 		ctr++;
		// 	}
		// 	r++;
		// }
		for(int j=r;j<s.length();j++){
			if(s[j]=='1'){
				ans+=ctr;
				ctr=0;

			}
			else{
				ctr++;
			}
		}

		 cout<<ans<<"\n";
	}
	return 0;
}