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
Node* FindMin(Node* root) {
	if(root == NULL) return NULL;
	while(root->left != NULL)
		root = root->left;
	return root;
}
Node* Find(Node*root, int data) {
	if(root == NULL) return NULL;
	else if(root->data == data) return root;
	else if(root->data < data) return Find(root->right,data);
	else return Find(root->left,data);
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
 void Inorder(Node* root)
{

    if(root==NULL)
        return ;
    Inorder(root->left);
    std::cout<<root->data;
    std::cout<<" ";
    Inorder(root->right);
}
Node* Getsuccessor(Node* root,int data)
{

    Node* current=Find(root,data);
    if(current==NULL)
        return NULL;
    if(current->right != NULL) {  //Case 1: Node has right subtree
		return FindMin(current->right); // O(h)
	}
    else
    {
        Node* successor=NULL;
        Node* ancestor=root;
        while(ancestor!=current)
        {
            if(current->data< ancestor->data)
            {
                successor=ancestor;
                ancestor=ancestor->left;
            }
            else
            {
                ancestor=ancestor->right;
            }
        }
        return  successor;
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

	//Print Nodes in Inorder
	cout<<"Inorder Traversal: ";
	Inorder(root);
	cout<<"\n";

	// Find Inorder successor of some node.
	 Node* successor = Getsuccessor(root,11);
	if(successor == NULL) cout<<"No successor Found\n";
	else
    cout<<"Successor is "<<successor->data<<"\n";
}
