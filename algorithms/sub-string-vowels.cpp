//number of substrings containig vowels  and there are no consonants (non-vowel characters) present in the sub-strings.
#include<bits/stdc++.h>
using namespace std;
int isvowel(char s){
	if(s=='a' || s=='i' || s=='e'  || s=='o'  || s=='u'){
		return 1;
	}
	else
	return 0;	
	
}
int count(string s){
	cout<<s<<"\n";
	int n=s.length(),i,start=0,c=0;
	map<char,int>mp;
	for(i=0;i<n;i++){
		mp[s[i]]++;
	
	while(mp['a']>0 && mp['i']>0 && mp['e']>0 && mp['o']>0 && mp['u']>0){
		c=c+(n-i);
		mp[s[start]]--;
		start++;
	}
}
	return c;
}
int main(){
	string s,temp="";
	cin>>s;
	int n,i,ans=0,l;
	n=s.length();
	for(i=0;i<n;i++){
		if(isvowel(s[i])==1){
			temp=temp+s[i];
		}
		else{
			if(temp.length()>0){
				ans=ans+count(temp);
				temp="";
			}
		}
	}
	if(temp.length()>0){// edge case!! there might be last series of vowel characters!!
		ans=ans+count(temp);
	}
	cout<<ans;
}

