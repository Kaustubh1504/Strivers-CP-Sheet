#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	map<int,int> m;
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		m.insert({t,i});
	}

	for(int i=1;i<=n;i++) {
		cout<<m[i]<<" " ;
	}
	return 0;
}