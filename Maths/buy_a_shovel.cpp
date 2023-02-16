#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int k,y;
	cin>>k>>y;

	for(int i=1;i<=10;i++){
		if(k*i%10==0 || k*i%10==y){
			cout<<i;
			break;
		}
	}
	return 0;
}