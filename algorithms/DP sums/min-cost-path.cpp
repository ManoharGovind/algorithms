//min cost path from (0,0) to (n,n) using dp
#include <bits/stdc++.h>
#define usl unsigned long long int
#define lli long long int
#define mod 1000000007
using namespace std;
int main(){
	int m,n,i,j;
	cin>>m>>n;
	int a[m][n],dp[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	//filling the first row distances
	dp[0][0]=a[0][0];
	for(i=1;i<=m;i++){
		dp[0][i]=dp[0][i-1]+a[0][i];
	}
	//filling the first column
	for(i=1;i<=n;i++)
		dp[i][0]=dp[i-1][0]+a[i][j];
	
	for(i=1;i<m;i++){
		for(j=1;j<n;j++){
			//dp[i][j]=min(dp[i-1][j-1],dp[i-1][j],dp[i][j-1])+a[i][j]; we can also write
			dp[i][j]=min(dp[i-1][j-1],dp[i-1][j]);
			dp[i][j]=min(dp[i][j],dp[i-1][j])+a[i][j];
		}
	}
	/*for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
	cout<<dp[m-1][n-1]<<endl;
}
