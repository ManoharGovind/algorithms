//longest common substring 
//https://www.youtube.com/watch?v=tABtJbLOQho&list=PLamzFoFxwoNjtJZoNNAlYQ_Ixmm2s-CGX&index=4
#include <bits/stdc++.h>
#define usl unsigned long long int
#define lli long long int
#define mod 1000000007
using namespace std;
int main(){
	string s,t;
	cin>>s>>t;
	int m=s.length(),n=t.length(),i,j,mx=-1;
	int dp[m+1][n+1];
	memset(dp,0,sizeof(dp));
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(s[i-1]==t[j-1])
			dp[i][j]=1+dp[i-1][j-1];
			mx=max(mx,dp[i][j]);
		}
	}
	cout<<mx;
}
