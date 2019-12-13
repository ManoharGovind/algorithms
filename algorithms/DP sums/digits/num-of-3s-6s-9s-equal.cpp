//the numbers with in a range where number having digits 3s=6s=9s
//https://www.spoj.com/problems/NUMTSN/
#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
//#define _ ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;
int dp[60][60][60][60];
lli goo(int d,int tc,int sc,int nc){
	if(d==0){
		if(tc==sc && sc==nc && tc!=0){// edge case tc!=0
			return 1;
		}
		else
		return 0;
	}
	if(dp[d][tc][sc][nc]!=-1){
		return dp[d][tc][sc][nc];
	}
	
		int j;
		lli ans=0;
	for(j=0;j<=9;j++){
		if(j==3){
		ans=ans+goo(d-1,tc+1,sc,nc);
		if(ans>=mod)
		ans=ans-mod;
		}
		else if(j==6){
			ans=ans+goo(d-1,tc,sc+1,nc);
			if(ans>=mod)
			ans=ans-mod;
		}
		else if(j==9){
			ans=ans+goo(d-1,tc,sc,nc+1);
			if(ans>=mod)
			ans=ans-mod;	
		}
		
		else{
			ans=ans+goo(d-1,tc,sc,nc);
			if(ans>=mod)
			ans=ans-mod;
		}
	}
     return dp[d][tc][sc][nc]=ans;
}
lli fun(int n){
	char s[100];
	sprintf(s,"%d",n);
	int len,i,j,d,tc=0,sc=0,nc=0,v=0;
	lli ans=0;
	len=strlen(s);
	d=len;
	for(i=0;i<len;i++){
		d--;
		v=s[i]-'0';
		for(j=0;j<v;j++){
		if(j==3){
			ans=ans+goo(d,tc+1,sc,nc);
			if(ans>=mod)
			ans=ans-mod;
		}
		else if(j==6){
			ans=ans+goo(d,tc,sc+1,nc);
			if(ans>=mod)
			ans=ans-mod;
		}
		else if(j==9){
		ans=ans+goo(d,tc,sc,nc+1);
		if(ans>=mod)
			ans=ans-mod;	
		}
		else{
			ans=ans+goo(d,tc,sc,nc);
			if(ans>=mod)
			ans=ans-mod;
		}
		
		}
		if(v==3)
		tc++;
		else if(v==6)
		sc++;
		else if(v==9)
		nc++;
	}
	return ans;
	
}
int main(){
	int t,l;
	cin>>t;
	memset(dp,-1,sizeof(dp));
	while(t--){
		int n1,n2,v1,v2,ans=0;
		cin>>n1>>n2;
		v1=fun(n2+1);
		v2=fun(n1);
		//cout<<v1<<" "<<v2<<"\n";
		ans=v1-v2;
		if(ans<0){
			ans=ans+mod;
		}
		cout<<ans<<"\n";
	}
	
}
