#include<bits/stdc++.h>
#define lli long long int
#define usl unsigned long long int
#define mod 1000000007
#define MAX 100000
#define FAST ios_base::sync_with_stdio(false);
using namespace std;
int fun(){
	int n,k,r,x,i,j,p,s,mn=11111,ans[10000]={0};
	vector<int> a;
	cin>>n>>k;
	int arr[n+1];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<=pow(2,n);i++){
		if(__builtin_popcount(i)==k){
			x=i;
			//cout<<"set bits"<<i<<"\n";
			while(x>0){
				r=x%2;
				a.push_back(r);
				x=x/2;
			}
			p=n-a.size();
			for(j=0;j<p;j++){
				a.push_back(0);
			}
			reverse(a.begin(),a.end());
			s=0;
			for(j=0;j<a.size();j++){
				if(a[j]==1){
					cout<<arr[j]<<" ";
				}
			}
			cout<<endl;
		}
		a.clear();
	}
}
int main(){
	int t;
	cin>>t;
	while(t--)
	fun();
	
}
