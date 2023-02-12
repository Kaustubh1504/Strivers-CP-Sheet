#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){

	for(int i=10;i>=0;i--){
		cout<<((num>>i)&1);
	}
	cout<<endl;
}


int main(int argc, char const *argv[])
{	

	int a=28;
	printBinary(a);

	printBinary(1<<2);

	if((a&(1<<2))!=0) cout<<"bit set";
	else cout<<"bit not set";
	cout<<endl;

	//bit set
	printBinary((a|(1<<8)));
	//unset bit
	//printBinary(~(1<<3));
	printBinary((a & ~(1<<3)));

	// toggle
	printBinary((a^(1<<2)));


	return 0;
}