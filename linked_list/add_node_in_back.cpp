#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct node{
    int data;
    node *next;
};

node *makeNode(int x){
    node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void pushBack(node *&head, int x){
    node *newNode = makeNode(x); // create a blank node
    if (head == NULL){ // if my linked list doesn't have any node
        head = newNode;
        return;
    }
    node *temp = head; // another pointer
    while(temp->next != NULL){ // traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode; // assign next pointer of last node that will point to that blank node
}

void traverse(node *head){
    while(head != NULL){
        cout << head->data << ' ';
        head = head->next;
    }
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
        pushBack(head, i);
    }
    traverse(head);
    return 0;
}