#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int n=s.size();
	int ans=0;

	for(int i=0;i<n;i++){

		if(s[i]=='Q'){
			for(int j=i+1;j<n;j++){
				if(s[j]=='A'){
					for(int k=j+1;k<n;k++){
						if(s[k]=='Q') ans++;
					}
				}
			}
		}

	}

	cout<<ans;
	return 0;
}