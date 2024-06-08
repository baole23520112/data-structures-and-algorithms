#include <bits/stdc++.h>
using namespace std;

using ll = long long;


// int main(){
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
//     // #endif
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     string s; cin >> s;
//     s += 'a'; // stop condition of for loop if not, it dont display the last char.
//     char temp = s[0];
//     int count = 0;
//     for (int i = 1; i < s.size(); i++){
//         if (isalpha(s[i])){
//             for (int j = 0; j < count; j++){
//                 cout << temp;
//             }
//             temp = s[i];
//             count = 0;
//         }
//         else if (isdigit(s[i])){
//             count = count * 10 + (s[i] - '0');
//         }
//     }
//     return 0;
// }

int main(){
    char c;
    int n;
    while(cin >> c >> n){
        cout << string(n, c);
    }
}