//print name n times using recursion
#include<bits/stdc++.h>
using namespace std;
int ctr=0;
string name ="kaustubh";
void print(){
	cout<<name<<"\n";
	ctr++;
	if(ctr==4) return;
	print();
}
// int n=100;
void printN(int n){
	if(n==0) return;
	cout<<n<<"\n";
	n--;
    printN(n);
}
int p=1;
int num=100;
void printNum(int n){
	if(p>num) return;
	cout<<p<<"\n";
	p++;
	printNum(p);
	

}
int main(int argc, char const *argv[])
{
	

	printNum(100);
	return 0;
}
