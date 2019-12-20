//maximum size square sub-matrix with all 1's
//https://www.youtube.com/watch?v=aYnEO53H4lw&list=PLamzFoFxwoNjtJZoNNAlYQ_Ixmm2s-CGX&index=17
#include <bits/stdc++.h>
#define usl unsigned long long int
#define lli long long int
#define mod 1000000007
using namespace std;
int main(){
	int r,c,i,j,mx=0;
	cin>>r>>c;
	int a[r][c],mat[r][r];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		cin>>a[i][j];
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==0 || j==0){
				mat[i][j]=a[i][j];
			}
			else if(a[i][j]==1){
				mat[i][j]=min(mat[i-1][j-1],mat[i-1][j]);
				mat[i][j]=min(mat[i][j],mat[i][j-1]);
				mat[i][j]=1+mat[i][j];
			}
			else{
				mat[i][j]=0;
			}
			mx=max(mx,mat[i][j]);
		}
	}
	/*for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		cout<<mat[i][j]<<" ";
		cout<<"\n";
	}*/
	cout<<mx;
}
