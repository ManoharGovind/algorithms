//dp technique to find maximum sum of nodes in a tree
#include<bits/stdc++.h>
#include<vector>
using namespace std;
 int a[100001];
 int dp[100001];
 vector <int> tree[100001];
 int dfs(int n,int p ){
 	int mx=0,i;
 	dp[n]=a[n];
 	for(i=0;i<tree[n].size();i++){
 		if(tree[n][i]==p){
 			continue;
		 }
 			dfs(tree[n][i],n);
 			mx=max(mx,dp[tree[n][i]]);
		 
	 }
	 dp[n]=dp[n]+mx;
 }
int main()
{
	int t,i,x,y;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(i=1;i<=n;i++){
			cin>>a[i];
		}
		for(i=1;i<n;i++){
			cin>>x>>y;
			tree[x].push_back(y);
			tree[y].push_back(x);
		}
		dfs(1,1);
	
		cout<<dp[1]<<"\n";
		
		
	}
	
}
