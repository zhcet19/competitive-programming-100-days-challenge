#include<iostream>
#include<queue>
using namespace std;
struct BstNode{
    char data;
    BstNode* left;
    BstNode* right;
};
void Preorder(BstNode* root)
{
    if(root==NULL)
        return ;
    std::cout<<root->data;
    std::cout<<" ";
    Preorder(root->left);
    Preorder(root->right);

}
void Inorder(BstNode* root)
{

    if(root==NULL)
        return ;
    Inorder(root->left);
    std::cout<<root->data;
    std::cout<<" ";
    Inorder(root->right);
}
void Postorder(BstNode* root)
{

    if(root==NULL)
        return;
    Postorder(root->left);
    Postorder(root->right);
    std::cout<<root->data;
    std::cout<<" ";
}
BstNode* GetNewNode(char data)
{
    BstNode* newNode=new BstNode();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
BstNode* Insert(BstNode* root,char data)
{

    if(root==NULL)
    {
        root=GetNewNode(data);
    }
    else if(data<= root->data)
    {
        root->left=Insert(root->left,data);
    }
    else
    {
        root->right=Insert(root->right,data);
    }
    return root;
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	            M
			   / \
			  B   Q
			 / \   \
			A   C   Z
    */
	BstNode* root = NULL;
	root=Insert(root,'M');
	root=Insert(root,'B');
	root=Insert(root,'Q');
    root=Insert(root,'A');
	root=Insert(root,'C');
	root=Insert(root,'Z');
	//Print Nodes in PreOrder.
	std::cout<<"The Preorder traversal of the tree is as:-"<<"\n";
	Preorder(root);
	std::cout<<"\n";
	/* Output
	M B A C Q Z
	*/
	std::cout<<"The Inorder traversal  of the tree is as:- "<<"\n";
	Inorder(root);
	std::cout<<"\n";
	/*Output
	A B C M Q Z
	*/
	std::cout<<"The Postorder traversal of the tree is as :-"<<"\n";
    Postorder(root);
    std::cout<<"\n";
    /*output
    A C B Z Q M
    */

}

