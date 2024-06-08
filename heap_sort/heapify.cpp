#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// O(nlogn)

// xây dựng heapify từ dưới lên để đảm bảo không bị mất thứ tự khi làm từ trên xuống
void heapify(int a[], int n, int i){ // heapify tạo max-heap tại cha (i)
    int l = 2 * i + 1; // con bên trái
    int r = 2 * i + 2; // con bên phải
    int largest = i; // ban đầu gán largest = pos của cha
    if (l < n && a[l] > a[largest]){ // nếu còn ở trong mảng và lớn hơn value của largest
        largest = l; // thì gán lại largest
    }
    if (r < n && a[r] > a[largest]){
        largest = r;
    }
    if (largest != i){ // nếu khác với vị trí của cha ban đầu
        swap(a[i], a[largest]); // đổi value largest và cha
        heapify(a, n, largest); // gọi đệ quy đến vị trí cha (largest)
    }
}

void heapSort(int a[], int n){
    // Build max-heap
    for (int i = n / 2 - 1; i >= 0; i--){
        heapify(a, n, i);
    }
    // sắp xếp bằng cách chuyển value max về cuối và cắt bỏ, rồi tiếp tục xây dựng max-heap
    for (int i = n - 1; i >= 0; i--){ // i-- tức là cắt bỏ khi đã chuyển max về cuối
        swap(a[i], a[0]);
        // heapify lại
        heapify(a, i, 0); // số lượng chỉ còn lại i ptử
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
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    heapSort(a, n);
    for (int x : a) cout << x << ' ';
    return 0;
}