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
}

void traverse(node *head){
    while(head){
        cout << head->data << ' ';
        head = head->next;
    }
}

void selectionSort(node *&head){
    for (node *i = head; i != NULL; i = i->next){
        node *minNode = i;
        for (node *j = i->next; j != NULL; j = j->next){
            if (minNode->data > j->data){
                minNode = j;
            }
        }
        // swap
        int temp = minNode->data;
        minNode->data = i->data;
        i->data = temp;
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
    int a[5] = {9, 2, 0, 1, 5};
    for (int x : a){
        pushBack(head, x);
    }
    traverse(head); cout << endl;
    selectionSort(head);
    traverse(head);
    return 0;
}