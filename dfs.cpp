#include<bits/stdc++.h>
using namespace std;
int m[10][10]={0},vis[10]={0},v,e;
int dfs(int i){
	int j;
	cout<<i<<" ";
	vis[i]=1;
	for(j=0;j<v;j++){
		if(!vis[j] && m[i][j]==1 ){
			dfs(j);
		}
	}
}
int main(){
	int i,a,b;
	cin>>v>>e;
	for(i=0;i<e;i++){
		cin>>a>>b;
		m[a][b]=1;
	}
	dfs(2);
}


 
