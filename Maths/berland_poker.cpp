#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		int n,m,k;
		cin>>n>>m>>k;

		if(m<n/k) cout<<m;
		else if(m==0) cout<<m;
		else{
			int firstPy = (n/k);
			int jokerLeft = m - firstPy;
			int secondPy = jokerLeft/(k-1);
			if(jokerLeft%(k-1)!=0) secondPy+=1;

			cout<<firstPy-secondPy;
		}

		cout<<endl;
	}
	return 0;
}