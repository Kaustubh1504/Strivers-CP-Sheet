#include<bits/stdc++.h>
using namespace std;

int requiredLevelCubes(int level){
	int cubes=0;
    cubes = level*(level+1)/2;
    return cubes;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int i=1;
	int result=0;
	if(n==1) cout<<1;
	else{
		while(true){
		result+=requiredLevelCubes(i);
		// cout<<result<<" "<<i<<" "<<requiredLevelCubes(i)<<endl;
		if(result<n) i++;
		else break;
		}

		cout<<i-1;

	}
	
	return 0;
}