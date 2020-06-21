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
//Using iterative approach to find min element in a BST
int FindMin (BstNode* root)
{
    BstNode* current=root;
    if(root==NULL)
    {
    std::cout<<"Tree is empty"<<"\n";
     return -1;
    }
    while(current->left!=NULL)
    {
        current=current->left;
    }
    return current->data;
}
//Using recursive approach to find max element in a BST
int FindMax(BstNode* root)
{

    BstNode* current=root;
    if(root==NULL)
    {
    std::cout<<"Tree is empty"<<"\n";
     return -1;
    }
    else if(current->right ==NULL)
    {
        return current->data;
    }
    else
        return FindMax(current->right);
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
	//FInding max in BST

	std::cout<<"The max no in the BST IS:- ";
    int max=FindMax(root);
    std::cout<<max<<endl;
    //Finding min in a BST
    std::cout<<"The min no in the BST IS:- ";
    int min=FindMin(root);
    std::cout<<min<<endl;
    FindMin(root);
    }


