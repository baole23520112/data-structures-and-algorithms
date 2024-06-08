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

int count(node *head){
    int dem = 0;
    while(head != NULL){
        dem++;
        head = head->next;
    }
    return dem;
}

void pushFront(node **head, int x){ // thay đổi head main bằng cách thay đổi *head trong function
    node *newNode = makeNode(x);
    // phần liên kết của node mới sẽ liên kết với địa chỉ của node đầu tiên nằm trong *head
    newNode->next = *head;
    // liên kết *head thanh địa chỉ của node mới vừa tạo
    *head = newNode;
}

void pushFront2(node *&head, int x){
    node *newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}

void pushBack(node **head, int x){
    node *temp = *head; // nếu không sử dụng biến temp thì head sẽ bị đổi vị trí quản lý
    node *newNode = makeNode(x);
    if (*head == NULL){
        *head = newNode; // phải sử dụng *head để gán newNode vì nếu NULL thì temp và head sẽ trỏ 2 chỗ khác nhau
        return;
    }
    while(temp->next != NULL){ // sai trong khi chưa có node nào thì sẽ bị lỗi bộ nhớ
        temp = temp->next;
    }
    // cho phần next của node temp -> newNode
    temp->next = newNode;
}

void pushBack2(node *&head, int x){
    node *temp = head;
    node *newNode = makeNode(x);
    if (head == NULL){
        head = newNode;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
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
    for (int i = 1; i <= 5; i++){
        pushFront(&head, i);
    }
    for (int i = 5; i <= 10; i++){
        pushFront2(head, i);
    }
    for (int i = 100; i <= 105; i++){
        pushBack(&head, i);
    }
    for (int i = 500; i <= 505; i++){
        pushBack2(head, i);
    }
    traverse(head);
    return 0;
}