#include <bits/stdc++.h>
// #pragma GCC optimize("03,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void pushBack(Node* &head, int x)
{
    Node* newNode = new Node(x);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void pushFront(Node* &head, int x)
{
    Node* newNode = new Node(x);
    newNode->next = head;
    head = newNode;
}

void pushMid(Node* &head, int x, int pos)
{
    Node* newNode = new Node(x);
    if (pos == 0)
    {
        pushFront(head, x);
        return;
    }
    Node* temp = head;
    for (int i = 1; i <= pos - 2; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void traverse(Node* head)
{
    Node* temp = head;
    while (temp)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
}

void deleteFront(Node* &head)
{
    if (head == NULL) return;
    head = head->next;
}

void deleteLast(Node* &head)
{
    if (head == NULL) return;
    if (head->next == NULL)
    {
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

void deleteMid(Node* &head, int x)
{
    if (x == 0) deleteFront(head);
    else if (x == x - 1) deleteLast(head);
    else 
    {
        Node* temp = head;
        for (int i = 1; i <= x - 2; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }
}

void 

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Node* head = NULL;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        pushBack(head, x);
    }
    int x; cin >> x;
    deleteMid(head, x);
    traverse(head);
    return 0;
}