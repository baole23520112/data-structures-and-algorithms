#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct SinhVien{
    string name;
    float gpa;
    SinhVien(){

    }
    SinhVien(string n, float g){
        name = n;
        gpa = g;
    }
};

struct node{
    SinhVien data;
    node *next;
};

node *makeNode(SinhVien a){
    node *newNode = new node;
    newNode->data = a;
    newNode->next = NULL;
    return newNode;
}

void pushBack(node *&head, SinhVien a){
    node *newNode = makeNode(a);
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
        cout << head->data.name << ' ' << fixed  << setprecision(2) << head->data.gpa << endl;
        head = head->next;
    }
}

void selectionSort(node *&head){
    for (node *i = head; i != NULL; i = i->next){
        node *minNode = i;
        for (node *j = i->next; j != NULL; j = j->next){
            if (minNode->data.gpa > j->data.gpa){
                minNode = j;
            }
        }
        SinhVien temp = minNode->data;
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
    SinhVien s("Teo", 3.5);
    SinhVien t("Ti", 3.8);
    SinhVien u("Long", 2.5);
    SinhVien v("Hai", 3.7);
    pushBack(head, s);
    pushBack(head, t);
    pushBack(head, u);
    pushBack(head, v);
    selectionSort(head);
    traverse(head);
    return 0;
}