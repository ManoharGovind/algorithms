//next palindrome number
/*
Input:
3
808
2133
999

Output:
818
2222
1001
*/
#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
#define MAX 100000
//#define _ ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;
int check(int a[],int n){
	int i;
	cout<<1;
	for(i=1;i<n;i++)
	cout<<0;
	cout<<1;
	return 0;
}
int fun(){
	string s;
	cin>>s;
	int i,j,len=s.length(),c=0,mid=0,f=0;
	int a[len];
	for(i=0;i<len;i++){
		a[i]=s[i]-'0';
	}
	for(i=0;i<len;i++){
		if(a[i]==9){
			c=c+1;
		}
	}
	if(c==len)
	check(a,len);
	else{
	mid=len/2;
	i=mid-1;
	j=(len%2)? mid+1 : mid;
	while(i>=0 && a[i]==a[j])
	i--,j++;
	if(i<0 || a[i]<a[j]){// i<0 because if input is already palindrome we need to increment middle number!
		f=1;
	}
	while(i>=0){
		a[j]=a[i];
		i--,j++;
	}
	if(f==1){
		c=1;
		i=mid-1;
		if(len%2==1){
			a[mid]=a[mid]+c;
			c=a[mid]/10;
			a[mid]=a[mid]%10;
			j=mid+1;
		}
		else
		j=mid;
		while(i>=0){
			a[i]=a[i]+c;
			c=a[i]/10;
			a[i]=a[i]%10;
			a[j++]=a[i--];
		}
	}
	for(i=0;i<len;i++)
	cout<<a[i];
	}
	
	return 0;
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		fun();
		cout<<"\n";
	}
	return 0;
}
