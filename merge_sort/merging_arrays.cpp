// mã giả O(nlogn)
/**
 * MergeSort(A, l, r):
 *      if l >= r -> nếu mà chỉ có 1 ptử hoặc sai chỉ số thì dừng luôn
 *          return
 *      m = (l + r) / 2
 *      mergeSort(A, l, m) -> chia mảng thành 2 mảng con rồi sắp xếp trong đó
 *      mergeSort(A, m + 1, n) -> chia mảng thành 2 mảng con rồi sắp xếp trong đó
 *      merge(A, l, m, r) -> merge 2 sub lại 
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Tron 2 day con : day 1[L, M], day 2 : [M + 1, R]

void merge(int a[], int l, int m, int r){ // trộn 2 dãy tăng dần từ l -> r
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while(i < x.size() && j < y.size()){
        if (x[i] <= y[j]){
            a[l] = x[i];
            i++;
            l++;
        }
        else {
            a[l] = y[j];
            j++;
            l++;
        }
    }
    while(i < x.size()){
        a[l] = x[i];
        i++;
        l++;
    }
    while(j < y.size()){
        a[l] = y[j];
        j++;
        l++;
    }
}

void mergeSort(int a[], int l, int r){
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(a, l, m); // đệ qui đến khi còn là 1 ptử thì merge
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
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
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        a[i] = rand() % 1000;
    }
    mergeSort(a, 0, n - 1);
    for (int x : a){
        cout << x << ' ';
    }
    return 0;
}