#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct node{
    int data;
    node *prev;
    node *next;
};

node *makeNode(int x){
    node *newNode = new node;
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void traverse(node *head){
    while(head){
        cout << head->data << ' ';
        head = head->next;
    }
    cout << endl;
}

void pushFront(node *&head, int x){
    node *newNode = makeNode(x);
    newNode->next = head;
    if (head) // check xem head có prev không
        head->prev = newNode;
    head = newNode;
}

void pushBack(node *&head, int x){
    node *newNode = makeNode(x);
    if (head == NULL){
        head = newNode;
        return;
    }
    node *temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

int size(node *head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
}

void pushMid(node *&head, int x, int k){
    int n = size(head);
    if (k < 1 || k > n + 1) return;
    if (k == 1){
        pushFront(head, x);
    }
    node *newNode = makeNode(x);
    node *temp = head;
    for (int i = 0; i < k - 2; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    node *head = NULL;
    for (int i = 0; i < 5; i++){
        pushFront(head, i);
    }
    traverse(head);
    for (int i = 5; i < 10; i++){
        pushBack(head, i);
    }
    traverse(head);
    pushMid(head, 100, 5);
    traverse(head);
    return 0;
}