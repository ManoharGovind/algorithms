#include<bits/stdc++.h>
using namespace std;
struct bst{
	int data;
	struct bst *left,*right;
};
typedef struct bst node;
node* getnode(int val){
	node *temp;
	temp=(node *)malloc(sizeof(node));
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node* add(node *temp,int val){
	if(temp==NULL){
		return getnode(val);
	}
	if(val<temp->data){
		temp->left=add(temp->left,val);
	}
	else if(val>temp->data){
		temp->right=add(temp->right,val);
	}
	return temp;
}
void inorder(node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
int main(){
	int n,i,a;
	node *root=NULL;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		if(i==0){
			root=add(root,a);//initially we need to know root address
		}
		else
		add(root,a);
	}
	inorder(root);
	//cout<<root->data<<"\n";
}
