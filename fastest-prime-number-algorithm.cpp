// Sieve of Eratosthenes (or) fastest alogrith to find prime number with in a range;
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool ans[n+1];
	memset(ans,true,sizeof(ans));
	int p,i;
	for(p=2;p*p<=n;p++){
		if(ans[p]==true){
			for(i=p*p;i<=n;i=i+p){
				ans[i]=false;
			}
		}
	}
	cout<<"prime number upto "<<n<<"are"<<"\n";
	for(i=1;i<=n;i++){
		if(ans[i]==true){
			cout<<i<<" ";
		}
	}
	
	
}
