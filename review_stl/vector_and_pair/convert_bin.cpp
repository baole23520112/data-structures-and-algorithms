#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<char> convert_number(long long n){
    vector<char> temp(64, '0');
    int i = 0;
    while(n){
        temp[i++] = (n % 2 == 0) ? '0' : '1';
        n /= 2;
    }
    reverse(temp.begin(), temp.end());
    return temp;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> bin = convert_number(n);
        for(char x : bin){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}