//longest increasing sub-sequence
//https://www.youtube.com/watch?v=Ns4LCeeOFS4&list=PLqM7alHXFySGbXhWx7sBJEwY2DnhDjmxm&index=5
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n,mx=0;
	cin>>n;
	int a[n],l[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		l[i]=1;
	}
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]>a[j] ){
				l[i]=max(l[i],l[j]+1);
			}
		}
	}
	for(i=0;i<n;i++){
		if(mx<l[i]){
			mx=l[i];
		}
	}
	cout<<mx;
	
}
