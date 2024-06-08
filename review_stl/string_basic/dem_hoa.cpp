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
    string s;
    getline(cin, s);
    int count = 0;
    stringstream ss(s);
    string word;
    while(ss >> word){
        bool check = true;
        for (int i = 0; i < word.size(); i++){
            if (!isupper(word[i])){
                check = false;
                break;
            }    
        }
        if (check) count++;
    }
    cout << count;
    return 0;
}