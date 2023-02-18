#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> vecSum(3,0);
	while(n--){
		int x,y,z;
		cin>>x>>y>>z;
		vecSum[0]+=x;
		vecSum[1]+=y;
		vecSum[2]+=z;
	}
	bool isAtEquil=true;

	for(auto e: vecSum){
		if(e!=0) isAtEquil=false;
	}

	if(isAtEquil) cout<<"YES";
	else cout<<"NO";

	return 0;
}