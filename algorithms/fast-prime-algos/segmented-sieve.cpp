//segmented seive of erasthones to find prime numbers in range of 0 to 10pow18
#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
#define MAX 100001
//#define FAST ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;
vector<int> ans;
int sieve(){
	bool prime[MAX];
	memset(prime,true,sizeof(prime));
	int i,j;
	
	for(i=2;i*i<MAX;i++){
		if(prime[i]==true){
			for(j=i*i;j<MAX;j=j+i){
				prime[j]=false;
			}
		}
	}
	for(i=2;i<MAX;i++){
		if(prime[i]==true){
			ans.push_back(i);
		//	cout<<i<<" ";
		}
		
	}
}
int segsieve(int l,int r){
	int i,j,v=sqrt(r);
	bool prime[r-l+1];
	memset(prime,true,sizeof(prime));
	for(i=0;ans[i]*ans[i]<=r;i++){
		//value smaller or equal to l.. we use to find the value near to l which is a multiple of ans[i];
		v=floor(l/ans[i])*ans[i];
		//the value should not be below l[left range] so v= ans[i]
		if(v<l){
			v=v+ans[i];
		}
	//marking all the multiples as false
		for(j=v;j<=r;j=j+ans[i]){
			prime[j-l]=false;
		}
		//there might be a case where v itself is prime number
		if(v==ans[i])
		prime[v-l]=true;
	}
	for(j=l;j<=r;j++){ // j=0 to j<=r-l
		if(prime[j-l]==true)//if j==true
		cout<<j<<"\n";///print j+l
	}
}
int main(){
	sieve();
	int t,n1,n2;
	cin>>t;
	while(t--){
		cin>>n1>>n2;
		segsieve(n1,n2);
		cout<<"\n";
	}
	
}
