#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000009
#define endl '\n'

struct node
{
    int data;
    node *right;
    node *left;
    node(int x)
    {
        data = x;
        right = left = NULL;
    }
};

void makeRoot(node *root, int v, char c)
{
    if (c == 'L')
        root->left = new node(v);
    else
        root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c)
{
    if (root == NULL)
        return;
    if (root->data == u)
        makeRoot(root, v, c);
    else
    {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

void levelOrder(node *root)
{
    if (root == NULL) return;
    queue<node*> q;
    q.push(root);
    cout << root->data << ' ';
    while(!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp->left != NULL)
        {
            q.push(temp->left);
            cout << temp->left->data << ' ';
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
            cout << temp->right->data << ' ';
        }
    }
}

void levelOrder2(node *root)
{
    if (root == NULL ) return;
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << temp->data << ' ';
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    node *root = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        char c;
        cin >> u >> v >> c;
        if (root == NULL)
        {
            root = new node(u);
            makeRoot(root, v, c);
        }
        else
            insertNode(root, u, v, c);
    }
    levelOrder(root);
    cout << endl;
    levelOrder2(root);
    return 0;
}