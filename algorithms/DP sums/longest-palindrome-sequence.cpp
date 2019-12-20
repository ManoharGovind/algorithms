//longest-palindrome-subsequence
//same as lcs simply reverse the input string and find lcs
#include <bits/stdc++.h>
#define usl unsigned long long int
#define lli long long int
#define mod 1000000007
using namespace std;
int main(){
	string s,t;
	cin>>s;
	t=s;
	reverse(t.begin(),t.end());
	int i,j,n=s.length();
	int dp[n+1][n+1];
	memset(dp,0,sizeof(dp));
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			if(i==0 || j==0)
			dp[i][j]=0;
			else{
				if(s[i-1]==t[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	cout<<"length of longest palindrome subsequence is"<<"\n";
	cout<<dp[n][n]<<"\n";
	cout<<"The palindrome subsequence is"<<"\n";
	i=n,j=n;
	int in=dp[n][n];
	string ans="";
	while(i>0 && j>0){
		if(s[i-1]==t[j-1]){
			ans=ans+s[i-1];
			i=i-1;
			j=j-1;
		}
		else{
			(dp[i-1][j]>dp[i][j-1])?i--:j--;
		}
	}
	cout<<ans<<"\n";
}
