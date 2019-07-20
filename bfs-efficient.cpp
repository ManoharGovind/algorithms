//bfs alogorithm efficient way!!
#include <bits/stdc++.h>
using namespace std;
int v;
vector<int>vis;
vector<vector<int > >mat;
int bfs(int i){
	int c,j;
	cout<<i<<" ";
	vis[i]=1;
	queue<int> ans;
	ans.push(i);
	while(ans.size()>0){
		c=ans.front();
		ans.pop();
		for(j=0;j<v;j++){
			if(vis[j]==0 && mat[c][j]==1){
				cout<<j<<" ";
				vis[j]=1;
				ans.push(j);
			}
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
	bfs(2);//starting with  node 2..
   
}  
