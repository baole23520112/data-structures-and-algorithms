#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool nt(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

void nhap(vector<int> &a){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
    }
}

vector<int> prime_list(vector<int> v){
    vector<int> res;
    for (int i = 0; i < v.size(); i++){
        if (nt(v[i])){
            res.push_back(v[i]);
        }
    }
    return res;
}

void in(vector<int> a){
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << ' ';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v;
    nhap(v);
    vector<int> res = prime_list(v);
    in(res);
}