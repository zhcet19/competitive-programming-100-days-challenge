#include<iostream>
#include<queue>
using namespace std;
struct BstNode{
    char data;
    BstNode* left;
    BstNode* right;
};
void LevelOrder(BstNode* root)
{

    if(root==NULL)
        return;
        queue<BstNode* >Q;
        Q.push(root);
        while(!Q.empty()) {
       int size =Q.size();
		for (int i = 0; i < size; i++) {
		BstNode* current = Q.front();

		cout<<  current->data<<" ";
		if(current->left != NULL) Q.push(current->left);
		if(current->right != NULL) Q.push(current->right);
			Q.pop(); // removing the element at front
	}
	std::cout<<"\n";
        }

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
	//Print Nodes in Level Order.
	LevelOrder(root);
	/* Output
	M
	B Q
	A C Z
	*/
}
