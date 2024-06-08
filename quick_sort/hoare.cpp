#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int partition(int a[], int l, int r){
    int pivot = a[l];
    int i = l - 1, j = r + 1;
    while(1){
        do {
            i++;
        }while (a[i] < pivot);
        do {
            j--;
        }while (a[j] > pivot);
        if (i < j){
            swap(a[i], a[j]);
        }
        else return j;
    }
}

void quickSort(int a[], int l, int r){
    if (l >= r) return;
    int pos = partition(a, l, r);
    quickSort(a, l, pos);
    quickSort(a, pos + 1, r);
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
    quickSort(a, 0, n - 1);
    for (int x : a) cout << x << ' ';
    return 0;
}