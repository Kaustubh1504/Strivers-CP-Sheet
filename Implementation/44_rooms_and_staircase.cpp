#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;

		cin>>n>>s;

		set<char> charset;

		for(auto c: s){
			charset.insert(c);
		}

		if(charset.size()==1) {
			if(s[0]=='1') cout<<2*n;
			else cout<<n;
		}
		else{
			int ans=0;
			int cur=0;

			//starting from left
			for(int i=0;i<n;i++){
				if(s[i]=='1'){
					// i is a staircase
					cur=(i+1)-1 + (i+1)-1 +2;
					//cout<<i<<" ";
					ans=max(ans,cur);

				}
			}
			//starting from right

			for(int i=n-1;i>=0;i--){
				if(s[i]=='1'){
					// i is a staircase
					cur=n-(i+1) + n-(i+1) + 2;
					//cout<<i<<" ";
					ans=max(ans,cur);

				}

			}


			cout<<ans;
		}
		cout<<"\n";
	}



	return 0;
}