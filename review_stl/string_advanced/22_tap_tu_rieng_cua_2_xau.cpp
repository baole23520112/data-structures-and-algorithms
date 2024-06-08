#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for (char &x : s1) x = tolower(x);
    for (char &x : s2) x = tolower(x);
    set<string> se1, se2;
    stringstream ss(s1);
    string word;
    while(ss >> word){
        se1.insert(word);
    }
    stringstream xx(s2);
    string tu;
    while(xx >> tu){
        se2.insert(tu);
    }
    set<string> giao;
    for (auto x : se1){
        if (se2.find(x) == se2.end()){
            giao.insert(x);
        }
    }
    for (auto x : giao){
        cout << x << ' ';
    }
    return 0;
}