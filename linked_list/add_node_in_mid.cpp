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

void traverse(node *head){
    while(head != NULL){
        cout << head->data << ' ';
        head = head->next;
    }
}

int sizeList(node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

void pushFront(node *&head, int x){
    node *newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}

void pushMiddle(node *&head, int x, int pos){
    node *newNode = makeNode(x);
    int n = sizeList(head);
    if (pos < 1 || pos > n + 1) return; // ngoài giá trị 1->n+1 thì stop
    if (pos == 1){ // chèn đầu
        pushFront(head, x);
    }
    else {
        node *temp = head;
        for (int i = 0; i < pos - 2; i++){ // duyệt k - 2 lần
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteFront(node *&head){
    if (head == NULL) return;
    node *temp = head;
    head = head->next;
    delete temp;
}

void deleteLast(node *&head){
    if (head == NULL) return;
    if (head->next == NULL){
        delete head->next; 
        head = NULL;
        return;
    }
    node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    node *last = temp->next;
    temp->next = NULL;
    delete last;
}

void deleteMiddle(node *&head, int pos){
    int n = sizeList(head);
    if (pos < 1 || pos > n) return;
    else {
        node *temp = head;
        for (int i = 0; i < pos - 2; i++){
            temp = temp->next;
        }
        node *mid = temp->next;
        temp->next = mid->next;
        delete mid;
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
        pushFront(head, i);
    }
    traverse(head); 
    cout << endl;


    // pushMiddle(head, 10, 3);
    // pushMiddle(head, 20, 1);
    // traverse(head);


    // deleteFront(head);
    // cout << endl;
    // traverse(head);


    // deleteLast(head);
    // cout << endl;
    // traverse(head);

    deleteMiddle(head, 3);
    traverse(head);
    return 0;
}