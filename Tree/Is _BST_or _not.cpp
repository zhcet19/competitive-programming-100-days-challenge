#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
void storeInorder(Node* root,vector<int> &arr)
{
    if (root == NULL)
        return;
    storeInorder(root->left, arr);
    arr.push_back(root->data);
    storeInorder(root->right, arr);
}
bool IsBST(Node* root)
{
    vector<int>arr; // Auxiliary vector to store inorder
    storeInorder(root,arr); // Traverses the vector in inorder fashion and stores the result in arr
    // Lets check if arr is in sorted order or not
    for(int i =1;i<arr.size();i++)
        {
            if (arr[i] < arr[i-1])
            return false ;}
    return true;
}
struct Node* newNode(int data)
{
    struct Node* node = new Node( );
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}

/* Driver program to test above functions*/
int main()
{
    struct Node *root = newNode(4);
    root->left        = newNode(2);
    root->right       = newNode(5);
    root->left->left  = newNode(1);
    root->left->right = newNode(3);

    if (IsBST(root))
        cout << "Is BST";
    else
        cout << "Not a BST";

    return 0;
}
