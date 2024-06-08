#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int partition(int a[], int l, int r){ // trả về vị trí của pivot sau khi partition xong
    int pivot = a[r]; // pivot là ptử cuối cùng
    int i = l - 1; // 1 pointer để giữ vị trí cho ptử exchange
    for (int j = l; j < r; j++){ // 1 pointer duyệt đến trước pivot tìm ptử exchange
        if (pivot >= a[j]){ // nếu mà tìm được ptử nhỏ hơn pivot
            i++; // thì tăng pointer giữ vị trí lên vị trí đầu tiên trong mảng
            swap(a[i], a[j]); // đổi giá trị của 2 pointer
        }
    }
    // chuyển pivot về giữa
    i++;
    swap(a[i], a[r]);
    return i; // vị trí đang có pivot cũ
}

void quickSort(int a[], int l, int r){
    if (l >= r) return;
    int pos = partition(a, l, r); // phân hoạch thành 2 mảng rồi
    quickSort(a, l, pos - 1); // thực hiện tiếp tục bên trái
    quickSort(a, pos + 1, r); // thực hiện tiếp tục bên phải
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    return 0;
}