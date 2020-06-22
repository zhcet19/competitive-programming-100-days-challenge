#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* GetNewNode(int data)
{
    Node* newNode=new Node();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
Node* Insert(Node* root,int data)
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
Node* FindMin (Node* root)
{
    Node* current=root;

    while(current->left!=NULL)
    {
        current=current->left;
    }
    return current;
}
void Inorder(Node* root)
{

    if(root==NULL)
        return ;
    Inorder(root->left);
    std::cout<<root->data;
    std::cout<<" ";
    Inorder(root->right);
}
Node* Delete(Node* root,int data)
{
    if(root==NULL)
        return root;
    else if(data< root->data)
        root->left=Delete(root->left,data);
    else if(data> root->data)
        root->right=Delete(root->right,data);
    else
    {
        //No child case
        if(root->left==NULL && root->right==NULL)
         {
        delete root;
        root == NULL;

        return root;}
        //1 child case
        else if(root->left==NULL)
        {
            Node* temp=root;
            root=root->right;
            delete temp;
            return root;
        }
       else if(root->right==NULL)
        {
            Node* temp=root;
            root=root->left;
            delete temp;
            return root;
        }
        //  2 child case
        else
        {
            Node* temp=FindMin(root->right);
            root->data=temp->data;
            root->right=Delete(root->right,temp->data);
            return root;
        }
    }

}
int main() {
	/*Code To Test the logic
	  Creating an example tree
                5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	Node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4);
	root = Insert(root,1); root = Insert(root,11);


	// Deleting node with value 5, change this value to test other cases
	root = Delete(root,5);
	/*After deletion operation tree would as such
                10                                                      4
			   / \                                                     /  \
			  3   11  (for taking min from right subtree)  OR         3    10  (for taking max from left sub tree)
			 / \                                                     /      \
			1   4                                                   1       11
    */

	//Print Nodes in Inorder
	cout<<"Inorder: ";
	Inorder(root);
	cout<<"\n";
}
