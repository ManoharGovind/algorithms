//number of substrings containig vowels
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	map<char,int>mp;
	int i,j,ans=0;
	mp['a']=0 , mp['i']=0 , mp['e']=0 , mp['o']=0 , mp['u']=0;
	for(i=0;i<s.length();i++){
		for(j=i;j<s.length();j++){
			mp[s[j]]++;
			if(mp['a']>0 && mp['i']>0 && mp['e']>0 && mp['o']>0 && mp['u']>0){
				ans=ans+1;
			}
		}
		mp['a']=0 , mp['i']=0 , mp['e']=0 , mp['o']=0 , mp['u']=0;
	}
	cout<<ans;
}
