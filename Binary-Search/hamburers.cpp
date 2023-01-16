#include<bits/stdc++.h>
using namespace std;
long long nb, ns, nc,pb, ps, pc,r;
string ham;
 int b=0,s=0,c=0;

// 4

bool canMake(long long x){
	long long Breads= max(0ll,(b*x-nb));
	long long Sausage = max(0ll,(s*x-ns));
	long long cheese = max(0ll,(c*x-nc));

	long long total = Breads*pb + Sausage*ps + cheese*pc;

	if(total>r) return false; // broke
	else return true;   // total <= r

}

int main(int argc, char const *argv[])
{
	
	cin>>ham>>nb>>ns>>nc>>pb>>ps>>pc>>r;

	for(auto e: ham){
		if(e=='B') b++;
		else if(e=='S') s++;
		else c++;	
	}

    //cout<<b<<" "<<s<<" "<<c<<" ";

	long long  low=0ll;
	long long high = 1e15;
	long long mid;

	while(high-low>1){
		mid= low + (high-low)/2;

		if(canMake(mid)){
			low=mid;
		}else{
			high=mid-1;
		}
	}

	if(canMake(high)) cout<<high;
	else cout<<low;
	return 0;
}