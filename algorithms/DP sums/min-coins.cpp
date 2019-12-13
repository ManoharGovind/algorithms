/*
Find minimum number of coins that make a given value
Input: coins[] = {25, 10, 5}, V = 30
Output: Minimum 2 coins required
*/
//https://www.youtube.com/watch?v=NJuKJ8sasGk
//formula t[i]=min(t[i],1+t[i-coins[j]) where i>=coins[j]
#include <bits/stdc++.h>
#define usl unsigned long long int
#define lli long long int
#define mod 1000000007
using namespace std;
int main(){
	cout<<"enter number of coins"<<endl;
	int n,i,j,sum,k1,k2;
	cin>>n;
	cout<<"enter the coin values"<<endl;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the sum to be founded"<<endl;
	cin>>sum;
	int t1[sum+1],t2[sum];// t1 gives min coin value...t2 gives the path
	for(i=0;i<=sum;i++)
	t1[i]=10000,t2[i]=10000;//giving large values....
	t1[0]=0;
	for(i=0;i<n;i++){
		for(j=1;j<=sum;j++){
			if(j>=a[i]){
				k1=t1[j];
				t1[j]=min(t1[j],1+t1[j-a[i]]);
				k2=t1[j];
				if(k1!=k2)
				t2[j]=i;
			}
		}
	}
	for(i=0;i<=sum;i++)
	cout<<t2[i]<<" ";
	cout<<endl;
	cout<<t1[sum]<<endl;
	cout<<"the values are"<<endl;
	while(sum!=0){ 
		cout<<a[t2[sum]]<<" ";
		sum=sum-a[t2[sum]];				
}
}
