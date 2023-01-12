#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k,w;
	cin>>k>>n>>w;

	int total=0;

	for(int i=1;i<=w;i++){
		total=total+ i*k;
	}

	cout<<abs(total-n);
	return 0;
}