#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;

	int lower = (n+2-1)/2;
	int upper = n;

	bool isPossible = false;
	int i;
	for(i=lower;i<=upper;i++){
		if(i%m==0) {
			isPossible=true;
			break;
		}
	}

	if(isPossible) cout<<i;
	else cout<<-1;
	return 0;
}