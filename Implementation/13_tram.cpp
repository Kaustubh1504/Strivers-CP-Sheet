#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int cc=0;
	int mc=0;
	int a=0,b=0;
	while(t--){
		
		cin>>a>>b;
		cc=cc-a+b;
		mc=max(mc,cc);

	}

	cout<<mc;
	return 0;
}