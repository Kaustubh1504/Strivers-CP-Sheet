#include<bits/stdc++.h>
using namespace std;
//parametrised way
void print(int i,int sum){
	if(i<1){
		cout<<sum;
		return;
	}

	print(i-1,sum+i);
}

int sum(int n){
	if(n==0) return 0;

	return n+sum(n-1);
}

int main(int argc, char const *argv[])
{
	print(10,0);

	cout<<sum(100);
	return 0;
}