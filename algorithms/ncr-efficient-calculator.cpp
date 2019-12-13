#include <bits/stdc++.h>
#define usl unsigned long long int
#define lli long long int
#define mod 1000000007
using namespace std;
lli c(lli n,lli r){
	lli ans=1,i;
	if(r>n-r){ // because C(n, r)==C(n, n - r)
		r=n-r;
	}
	for(i=1;i<=r;i++){
		ans=ans*(n-r+i); // another formula for ncr=(n)(n-1)(n-2)(n-3)........*(n-r+1)
		ans=ans/i;         //                     _________________________________    
	}                      //                                 r!
	return ans;
}
int main(){
 	lli n,r;
 	cin>>n>>r;
	 cout<<c(n,r)<<endl;   
    
}
