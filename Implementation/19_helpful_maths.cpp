#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	int no=0,n2=0,n3=0;

	cin>>s;

	for(auto c: s){
		if(c=='1') no++;
		if(c=='2') n2++;
		if(c=='3') n3++;
	}
	// cout<<no<<n2<<n3;
	string ans="";
	for(int i=1;i<=no;i++){
		ans=ans+"1+";
	}
	for(int i=1;i<=n2;i++){
		ans=ans+"2+";
	}
	for(int i=1;i<=n3;i++){
		ans=ans+"3+";
	}
	for(int i=0;i<s.length();i++) cout<<ans[i];
	return 0;
}