//0-1 knapsack using dp!!
#include<bits/stdc++.h>
using namespace std;
int doo(int w,int wt[],int val[],int n){
	int dp[n+1][w+1],i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=w;j++){
			if(i==0 || j==0){
				dp[i][j]=0;
			}
			else if(w<wt[i-1]){
				dp[i][j]=dp[i-1][j];
			}
			else{
				dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
			}
		}
	}
	return dp[n][w];
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
