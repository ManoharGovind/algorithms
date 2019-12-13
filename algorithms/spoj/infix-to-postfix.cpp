//infix to postfix
//https://www.spoj.com/problems/ONP/
#include<bits/stdc++.h>
#define lli long long int
#define mod 1000000007
#define MAX 100000
//#define _ ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;
int precision(char c){
	if(c=='+' || c=='-')
	return 1;
	else if(c=='*' || c=='/')
	return 2;
	else if(c=='^')
	return 3;
	else
	return 0;
}
int fun(){
	string s,v="";
	char c;
	cin>>s;
	int i,j,n=s.length();
	stack<char>ans;
	ans.push('N');
	for(i=0;i<n;i++){
		if(s[i]=='(')
		ans.push(s[i]);
		else if(s[i]>='a' && s[i]<='z')//if character simply add to answer
		v=v+s[i];
		else if(s[i]==')'){// if this case add the stack contents because the operators precedance are already handled
			while(ans.top()!='N' && ans.top()!='('){
				c=ans.top();
				ans.pop();
				v=v+c;
			}
			if(ans.top()=='(')
			ans.pop();
		}
		else{
			while(ans.top()!='N' && precision(s[i])<=precision(ans.top())){
				v=v+ans.top();
				ans.pop();
			}
			ans.push(s[i]);
		}
	}
	while(ans.top()!='N'){
		v=v+ans.top();
		ans.pop();
	}
	cout<<v<<"\n";
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
