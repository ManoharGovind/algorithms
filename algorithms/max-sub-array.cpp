//maximum subarray simplest fast solution or kadane's algorithm!
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,mx,ans;//mx is maximum of current!
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	mx=ans=a[0];
	for(i=1;i<n;i++){
		mx=max(a[i],mx+a[i]);
		if(mx>ans){
			ans=mx;
		}
		//or we can write ans=max(mx,ans);
	}
	cout<<ans<<"\n";
	
}

