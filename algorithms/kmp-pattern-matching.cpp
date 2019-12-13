//kmp algorithm
#include<bits/stdc++.h>
using namespace std;
void compute(string pat,int lps[]){
	lps[0]=0;
	int i=1,len=0,m=pat.length();
	while(i<m){
		if(pat[i]==pat[len]){
			len=len+1;
			lps[i]=len;
			i=i+1;
		}
		else{
			if(len!=0){
				len=lps[len-1];
			}
			else{
				lps[i]=0;
				i=i+1;
			}
		}
	}
}
int main(){
	string text,pat;
	cin>>text>>pat;
	int tlen=text.length(),plen=pat.length();
	int lps[plen];
	compute(pat,lps);
	
	int i=0,j=0;
	/*for(i=0;i<plen;i++){
		cout<<lps[i]<<" ";
	}*/
	i=0;
	while(i<tlen){
		if(text[i]==pat[j]){
			i=i+1;
			j=j+1;
		}
		 if(j==plen){
		 	cout<<"pattern found at "<<i-j<<"\n";
		 	j=lps[j-1];
		 }
		 else if(i<tlen && pat[j]!=text[i]){
		 	if(j!=0){
		 		j=lps[j-1];
			 }
			 else{
			 	i=i+1;
			 }
		 }
	}
	
	
}
