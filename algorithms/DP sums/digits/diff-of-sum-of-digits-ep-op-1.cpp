//the count of numbers in a range where  difference between (sum of digits at even places and sum of digits at odd places) is 1!
//https://www.spoj.com/problems/LUCIFER/
#include<bits/stdc++.h>
#define lli long long int
using namespace std;
char s[100];
int dp[100][100][11];
//int vis[100][100][11];
int doo(int o,int e,int d){
	if(d==0){
		if(e-o==1)
		return 1;
		else
		return 0;
	}
	if(dp[o][e][d]!=-1){
		return dp[o][e][d];
	}
		int i,res=0;
		//vis[o][e][d]=1;
		for(i=0;i<=9;i++){
			if(d%2==0)
			res=res+doo(o,e+i,d-1);
			else
			res=res+doo(o+i,e,d-1);
		}
	
	dp[o][e][d]=res;
	//vis[o][e][d]=1;
	return dp[o][e][d];//return res;
	
}
int fun(int n){
	memset(dp,-1,sizeof(dp));//using multiple test cases so set each time dp to 0!
	//memset(vis,0,sizeof(vis));
	int i,j,d,len,v=0,ans=0,o=0,e=0;
	sprintf(s,"%d",n);
	len=strlen(s);
	d=len;
	for(i=0;i<len;i++){
		d--;
		v=s[i]-'0';
		for(j=0;j<v;j++){
			if((len-i)%2==0)
			ans=ans+doo(o,e+j,d);
			else
			ans=ans+doo(o+j,e,d);
		}
		if((len-i)%2==0)
		e=e+v;
		else
		o=o+v;
	}
	return ans;
}
int main(){
	int t,n1,n2,v1,v2;
	cin>>t;
	while(t--){
		cin>>n1>>n2;
		v1=fun(n1);
		v2=fun(n2+1);
		//cout<<v1<<" "<<v2<<"\n";
		cout<<v2-v1<<"\n";
	}
	
}
