//the array is allowed to make only right or down directions.given max row or col value is 1003
#include<bits/stdc++.h>
#include<cmath>
const int c=1003;
int a[c][c],m,n,vis[c][c], dp[c][c];
using namespace std;
int go(int i,int j){
	int &ans=dp[i][j];
	if(i==m-1 and j==n-1){
		return a[i][j];
	}
	if(vis[i][j]==1){
		return dp[i][j];
	}
	else if(i<m-1 and j<n-1){
		ans=a[i][j]+max(go(i+1,j),go(i,j+1));
	}
	else if(i<m-1 and j>=n-1){
		ans=a[i][j]+go(i+1,j);
	}
	else{
		ans=a[i][j]+go(i,j+1);
	}
	return ans;
}
int main(){
    int i,j;
	cin>>m>>n;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<go(0,0)<<endl;
	
}
