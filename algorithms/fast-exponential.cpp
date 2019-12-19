//fast exponential  ex: finding 2^50 in logn time
#include <bits/stdc++.h>
#define usl unsigned long long int
#define lli long long int
#define mod 1000000007
using namespace std;
int main(){
	lli a,n,ans=1;
	cin>>a>>n;
	while(n>0){
		if(n&1){//if n is odd
			ans=ans*a;		
		}
		n=n>>1;//n=n/2
		a=a*a;
	}
	cout<<ans;
}
