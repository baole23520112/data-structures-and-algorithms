#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

struct node {
    int data;
    node *left, *right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};

void makeRoot(node *root, int v, char c){
    if (c == 'L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c){
    if (root == NULL) return;
    if (root->data == u){
        makeRoot(root, v, c);
    }
    else {
        insertNode(root->right, u, v, c);
        insertNode(root->left, u, v, c);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    node *root = NULL;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int u, v; char c;
        cin >> u >> v >> c;
        if (root == NULL){
            root = new node(u); // tạo node root là u trước
            makeRoot(root, u, v, c); // gán luôn node v vào node root u
        }
        else {
            insert(root, u, v, c);
        }
    }
    return 0;
}