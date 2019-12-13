//https://www.youtube.com/watch?v=3D_Oj16EtD8&list=PLqM7alHXFySGbXhWx7sBJEwY2DnhDjmxm&index=8
//https:www.geeksforgeeks.org/binomial-coefficient-dp-9/
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
	int n,k,i,j;
	cin>>n>>k;
	int c[n+1][k+1];//important!
	for(i=0;i<=n;i++){
		for(j=0;j<=k;j++){
			if(i==j || j==0){//base case!
				c[i][j]=1;
			}
			else{
				c[i][j]=c[i-1][j-1]+c[i-1][j];//standard formula ncr=(n-1)c(r-1)+(n-1)cr;
			}
		}
	}
	cout<<c[n][k];
	
	
	
}
