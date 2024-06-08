#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, k, a[100];
int check;

void khoitao(){
    for (int i = 1; i <= n; i++) a[i] = 0;
}

bool check1(){ // ktr co du k bit 1 khong?
    int count = 0;
    for (int i = 1; i <= n; i++){
        if (a[i] == 1)
            count++;
    }
    return count == k;
}

bool check2(){ // ktr co duy nhat 1 cum k bit 1 lien tiep khong?
    int count = 0;
    int dem = 0;
    for (int i = 1; i <= n; i++){
        if (a[i] == 1) dem++;
        else {
            if (dem > k) return false; // vi chi can 111 ma co 1111 thi tuc la khong la duy I
            else if (dem == k) count++;
            dem = 0;
        }
    }
    if (dem > k) return false;
    else if (dem == k) count++;
    
    return count == 1;
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if (i == 0){
        check = 0;
    }
    else {
        a[i] = 1;
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
    cin >> n >> k;
    khoitao();
    check = 1;
    while(check){
        if (check1()){
            for (int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << ' ';
        }
        sinh();
    }
    cout << endl;
    check = 1;
    while(check){
        if (check2()){
            for (int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << ' ';
        }
        sinh();
    }
    return 0;
}