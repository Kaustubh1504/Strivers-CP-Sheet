#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int h1,m1,h2,m2;

	scanf("%d:%d",&h1,&m1);
	scanf("%d:%d",&h2,&m2);

	int total =( h1*60+m1 + h2*60 + m2)/2;

	int fh = total/60;
	int fm = total%60;

	//cout<<fh<<fm<<endl;
	string fhz='0'+to_string(fh);
	//cout<<fhz;

	string fmz='0'+to_string(fm);
	//cout<<fmz;
	int l=fhz.length();
	int h=fmz.length();
	string ans="";
	// for(int i=0;i<2;i++) ans+=fhz[i];
	// ans+=':';
	// for(int i=0;i<2;i++) ans+=fmz[i];
	ans=fhz.substr(l-2)+':'+fmz.substr(h-2);

	cout<<ans;

	//cout<<fh<<":"<<fm;
	return 0;
}