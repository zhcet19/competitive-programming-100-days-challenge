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
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int FindHeight(BstNode* root)
{

    if(root==NULL)
        return -1;

    return max(FindHeight(root->left),FindHeight(root->right))+1;
}
int main()
{//initially setting address of root node to be null;
    BstNode* root=NULL;
//passing root pointer to insert function insert value in it
    root=Insert(root,15);
	root=Insert(root,10);
	root=Insert(root,20);
    root=Insert(root,8);
	root=Insert(root,12);
	root=Insert(root,17);
	root=Insert(root,25);
	root=Insert(root,19);

	std::cout<<"the height of the  binary tree is:- ";
	int res=FindHeight(root);
	std::cout<<res<<"\n";

    }

