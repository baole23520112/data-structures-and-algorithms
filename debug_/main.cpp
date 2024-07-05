#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

Node* insert(Node* root, int x)
{
    if (root == NULL)
    {
        return new Node(x);
    }
    if (root->data < x)
    {
        root->right = insert(root->right, x);
    }
    else
    {
        root->left = insert(root->left, x);
    }
    return root;
}

void inorder(Node* root)
{
    if (root)
    {
        inorder(root->left);
        cout << root->data << ' ';
        inorder(root->right);
    }
}

int main()
{
    Node* root = NULL;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        root = insert(root, x);
    }
    inorder(root);
    return 0;
}