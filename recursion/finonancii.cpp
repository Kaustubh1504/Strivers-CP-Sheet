#include<bits/stdc++.h>
using namespace std;
int fibonaacii(int n){

	if(n==1) return 1;
	if(n==0) return 0;

	int last=fibonaacii(n-1);
	int sLast=fibonaacii(n-2);

	return last + sLast;

}

int main(int argc, char const *argv[])
{   

	int n;
	n=4;
	cout<<fibonaacii(n);
	return 0;
}