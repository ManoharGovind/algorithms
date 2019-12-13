//non-dp 0-1 knapsack!!
#include<bits/stdc++.h>
using namespace std;
int doo(int w,int wt[],int val[],int n){
	if(n==0 || w==0){
		return 0;
	}
	 if(w<wt[n-1]){
		return doo(w,wt,val,n-1);
	}
	else{
		return max(val[n-1]+doo(w-wt[n-1],wt,val,n-1),doo(w,wt,val,n-1));
	}
}
int main(){
	int w,n,i;
	cin>>n>>w;
	int wt[n],val[n];
	for(i=0;i<n;i++){
		cin>>wt[i];
	}
	for(i=0;i<n;i++){
		cin>>val[i];
	}
	cout<<doo(w,wt,val,n);
}
