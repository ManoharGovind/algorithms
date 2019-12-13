//find the count of numbers less than input_number(given number as string) whose sum of digits is sum number
//ex: the number oof numbers below 689 whose sum of digits  is 12. 
#include <bits/stdc++.h>
using namespace std; 
int dp[1000][1000]={0};
int vis[1000][1000]={0};
int doo(int d,int s){
	int i,res=0;
	if(s==0){
		return 1;
	}
	if(s<0 || d==0){
		return 0;
	}
	if(vis[d][s]==1){
		return dp[d][s];
	}
	else{
		vis[d][s]=1;
		for(i=0;i<=9;i++){
		res=res+doo(d-1,s-i);
		dp[d][s]=res;
	}
	return dp[d][s];// return res;
}
}
int main(){ 
	string s;
	cin>>s;
	int n,i,j,len,d,v,ans=0,sum;
	cin>>sum;
	len=s.length();
	d=len;
	for(i=0;i<len;i++){
		d--;
		v=s[i]-'0';
		for(j=0;j<=v;j++){
			if(sum-j>=0)
			ans=ans+doo(d,sum-j);
		}
		sum=sum-v;
	}
		cout<<ans;
}

