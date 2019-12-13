//egg dropping non-dp!
//https://www.geeksforgeeks.org/egg-dropping-puzzle-dp-11/
#include<bits/stdc++.h>
using namespace std;
int doo(int n,int k){
	if(k==0 || k==1)
	return k;
	if(n==1)
	return k;
	int mn=INT_MAX,res,i;
	for(i=1;i<=k;i++){
		res=max(doo(n-1,i-1),doo(n,k-i));
		if(res<mn)
		mn=res;
	}
	return mn+1;
}
int main(){
	int n,k;//n is eggs k is floors
	cin>>n>>k;
	cout<<doo(n, k);
}
