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
    string s; getline(cin, s);
    string temp = "";
    for (int i = 0; i < s.size(); i++){
        if (s[i] == ' ' && s[i + 1] == ' '){
            continue;
        }
        temp += s[i];
    }
    stringstream ss(s);
    string word;
    int count = 1;
    while(ss >> word){
        if (count % 2 == 0){
            count++;
            for (int i = word.size() - 1; i >= 0; i--){
                cout << word[i];
            }
            cout << ' ';
        }
        else {
            count++;
            cout << word << ' ';
        }
    }
    return 0;
}