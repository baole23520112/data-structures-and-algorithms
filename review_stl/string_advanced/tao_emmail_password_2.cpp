#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void chuanhoa(string &s){
    int temp = stoi(s);
    s = to_string(temp);
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string name;
    map<string, int> check;
    int t; cin >> t;
    cin.ignore(1);
    while(t--){
        string mail = "", password = "";
        vector<string> v;
        getline(cin, name);
        stringstream ss(name);
        string word;
        while(ss >> word){
            for (int i = 0; i < word.size(); i++){
                word[i] = tolower(word[i]);
            }
            v.push_back(word);
        }
        mail = mail + v[v.size() - 2];
        for (int i = 0; i < v.size() - 2; i++){
            mail = mail + v[i][0];
        }
        
        check[mail]++;
        // tìm xem trong map có mail đó chưa
        if (check[mail] != 1)
            mail = mail + to_string(check[mail]);
        mail = mail + "@xyz.edu.vn";

        cout << mail << endl;
        stringstream xx(v[v.size() - 1]);
        string tu;
        while(getline(xx, tu, '/')){
            chuanhoa(tu);
            password = password + tu;
        }
        cout << password << endl;
        
    }
    return 0;
}