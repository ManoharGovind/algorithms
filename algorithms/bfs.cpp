#include<bits/stdc++.h>
using namespace std;
int m[10][10]={0},vis[10]={0},v,e;
int bfs(int i){
	int j,c=0;
	vector<int> ans;
	cout<<i<<" ";
	vis[i]=1;
	c=c+1;
	while(c<v){
		for(j=0;j<v;j++){
		if(vis[j]==0 &&	m[i][j]==1 ){
			cout<<j<<" ";
			vis[j]=1;
			c=c+1;
			ans.push_back(j);
		}
	}
	i=ans[0];
	ans.erase(ans.begin());
	}
}
int main(){
	int i,a,b;
	cin>>v>>e;
	for(i=0;i<e;i++){
		cin>>a>>b;
		m[a][b]=1;
	}
	bfs(2);
}


 
