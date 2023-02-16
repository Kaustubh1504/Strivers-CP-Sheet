#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{	
	int x;
	cin>>x;

	int ans=0;
	int i=5;
	while(x>0){
		ans+=x/i;
		x=x%i;
		i--;
	}
	cout<<ans;
	return 0;
}