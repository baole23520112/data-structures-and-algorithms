#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

struct node
{
    int data;
    node *right, *left;
    node(int x)
    {
        data = x;
        right = left = NULL;
    }
};

void makeRoot(node *root, int v, char c)
{
    if (c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c)
{
    if (root == NULL) return;
    if (root->data == u)
    {
        makeRoot(root, v, c);
    }
    else 
    {
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

void traverseSpiral(node *root)
{
    stack<node*> s1, s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
            node *temp = s1.top();
            s1.pop();
            cout << temp->data << ' ';
            if (temp->right)
                s2.push(temp->right);
            if (temp->left)
                s2.push(temp->left);
        }
        while(!s2.empty())
        {
            node *temp = s2.top();
            s2.pop();
            cout << temp->data << ' ';
            if (temp->left)
                s1.push(temp->left);
            if (temp->right)
                s1.push(temp->right);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    node *root = NULL;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int u, v; char c; cin >> u >> v >> c;
        if (root == NULL)
        {
            root = new node(u); // create a new node that is root
            makeRoot(root, v, c);
        }
        else 
        {
            insertNode(root, u, v, c);
        }
    }
    traverseSpiral(root);
    return 0;
}