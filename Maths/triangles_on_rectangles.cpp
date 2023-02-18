#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long t;
	cin>>t;

	while(t--){
		long long w,h;
		cin>>w>>h;
		vector<long long> x1,x2,y1,y2;
		long long k;
		cin>>k;
		for(long long i=0;i<k;i++){
			long long c;
			cin>>c;
			x1.push_back(c);
		}

		cin>>k;
		for(long long i=0;i<k;i++){
			long long c;
			cin>>c;
			x2.push_back(c);
		}

		cin>>k;
		for(long long i=0;i<k;i++){
			long long c;
			cin>>c;
			y1.push_back(c);
		}

		cin>>k;
		for(long long i=0;i<k;i++){
			long long c;
			cin>>c;
			y2.push_back(c);
		}
		

		//first triangle
		long long area1 = (x1[x1.size()-1]-x1[0])*h;

		//second triangle
		long long area2 = (x2[x2.size()-1]-x2[0])*h;

		//third triangl
		long long area3 = (y1[y1.size()-1]-y1[0])*w;

		//4th triangle
		long long area4 = (y2[y2.size()-1]-y2[0])*w;

		long long ans = max(max(area1,area2),max(area3,area4));
		cout<<ans<<endl;
	}
	return 0;
}