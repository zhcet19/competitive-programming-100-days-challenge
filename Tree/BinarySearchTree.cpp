#include<iostream>

using namespace std;
struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};
BstNode* GetNewNode(int data)
{
    BstNode* newNode=new BstNode();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
BstNode* Insert(BstNode* root,int data)
{

    if(root==NULL)
    {
        root=GetNewNode(data);
    }
    else if(data<=root->data)
    {
        root->left=Insert(root->left,data);
    }
    else
    {
        root->right=Insert(root->right,data);
    }
    return root;
}
bool Search(BstNode* root,int data)
{
    if(root==NULL)
        return false;
    else if(root->data==data)
        return true;
    else if(data<=root->data)
        return Search(root->left,data);
    else
        return Search(root->right,data);
}


int main()
{//initially setting address of root node to be null;
    BstNode* root=NULL;
//passing root pointer to insert function insert value in it
    root=Insert(root,15);
	root=Insert(root,10);
	root=Insert(root,20);
    root=Insert(root,25);
	root=Insert(root,8);
	root=Insert(root,12);
	//Ask user to enter a number.
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";

    }
