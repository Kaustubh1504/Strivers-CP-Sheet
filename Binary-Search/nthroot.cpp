#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	double n,m;
	cin>>n>>m;
	double low=1;
	double high=m;
	double mid=-1;
	double ebs=1e-6;
	while((high-low)>ebs){
		mid=(low+high)/2.0;
		double prod=1;

		for(int i=0;i<n;i++) prod=prod*mid;
		if(prod>m){
			high=mid;
		}
		else if (prod<m){
			low=mid;
		}
		else{
			break;
		}
	}

	cout<<mid;
	return 0;
}