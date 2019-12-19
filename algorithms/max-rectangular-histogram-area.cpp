//maximum rectangular histogram area
#include <bits/stdc++.h>
#define usl unsigned long long int
#define lli long long int
#define mod 1000000007
using namespace std;
int main(){
	int n,i,top,area=0,mxarea=-1;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	stack<int>s;
	i=0;
	while(i<n){
		if(s.empty() || a[s.top()]<=a[i])
		s.push(i++);
		else{
			top=s.top();
			s.pop();
			if(s.empty())
			area=a[top]*i;
			else{
				area=a[top]*(i-s.top()-1);
			}
		}
		mxarea=max(mxarea,area);
	}
	while(s.empty()==false){
		top=s.top();
		s.pop();
		if(s.empty())
			area=a[top]*i;
			else{
				area=a[top]*(i-s.top()-1);
			}
			mxarea=max(mxarea,area);
	}
	cout<<mxarea<<"\n";
}
