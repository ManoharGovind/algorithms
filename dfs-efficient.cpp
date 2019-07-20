//dfs alogorithm efficient way!!
#include <bits/stdc++.h>
using namespace std;
int v;
vector<int>vis;
vector<vector<int > >mat;
int dfs(int i){
	int c,j;
	cout<<i<<" ";
	vis[i]=1;
	for(j=0;j<v;j++){
		if(vis[j]==0 && mat[i][j]==1){
			dfs(j);
		}
	}
}
int main(){  
    int e,i,a,b;
    cin>>v>>e;
    vis.resize(v,0);
    mat.resize(v,vector<int>(e,0));
    for(i=0;i<e;i++){
    	cin>>a>>b;
    	mat[a][b]=1;
	}
	dfs(2);//starting with  node 2..
   
}  
