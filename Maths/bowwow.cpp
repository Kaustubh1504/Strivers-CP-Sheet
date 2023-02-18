#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int noofdigits=s.length();
	int ones=0;
	for(auto e: s){
		int t = e-48;
		if(t==1) ones++;
	}
	if(ones>1){
		// cout<<ceil(noofdigits/2);
		cout<< ((noofdigits+2-1)/2);
	}else{
		cout<<noofdigits/2;
	}
	return 0;
}