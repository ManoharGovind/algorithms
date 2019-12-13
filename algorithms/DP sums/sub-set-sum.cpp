/*Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.
Example:

Input:  set[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output:  True  //There is a subset (4, 5) with sum 9.
*/
#include <bits/stdc++.h>
#define usl unsigned long long int
#define lli long long int
#define mod 1000000007
using namespace std;
int main(){
	int n,i,j,sum;
	cin>>n;
	cout<<"enter values"<<endl;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the value the subset to be found"<<endl;
	cin>>sum;
	bool dp[n+1][sum+1];
	for(i=0;i<=n;i++)
	dp[i][0]=true;
	for(i=1;i<=sum;i++)
	dp[0][i]=false;
	for(i=1;i<=n;i++){
		for(j=1;j<=sum;j++){
			if(j<a[i-1])
			dp[i][j]=dp[i-1][j];
			else{
				dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
			}
		}
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=sum;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	if(dp[n+1][sum+1]){
		cout<<"sub set can be formed"<<endl;
	}
	else
	cout<<"subset cannot be formed"<<endl;
}
