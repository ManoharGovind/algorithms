// longest bitonic sequence
#include <bits/stdc++.h>
#define usl unsigned long long int
#define lli long long int
#define mod 1000000007
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int mx=0;
    int b[n],c[n];
    //memset(c,1,n*sizeof(c));
    //memset(b,1,n*sizeof(b));
    b[0]=1,c[n-1]=1;
    for(i=1;i<n;i++){
        b[i]=1;
        for(j=0;j<i;j++){
            if(a[i]>a[j]){
                b[i]=max(b[i],1+b[j]);
            }
        }
    }
    for(i=n-2;i>=0;i--){
        c[i]=1;
        for(j=n-1;j>i;j--){
            if(a[i]>a[j]){
                c[i]=max(c[i],1+c[j]);
            }
        }
    }
    for(i=0;i<n;i++){
       // cout<<b[i]<<" "<<c[i]<<"\n";
        mx=max(mx,b[i]+c[i]-1);
    }
    cout<<mx;
}
