// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long ;
// int main()
// {
//     string s;
//     cin>>s;
//     int n = s.length ();
//     s = "0" +s;
//     int base = 1e7 +9;
//     ll F[n+1] = {0};
//     int d[256] = {0};
//     for (int i =1; i<=n;i++)
//     {
//         d[s[i]]++;
//         int num1 = d['8'] -d['2'];
//         int num2 = d['t'] -d['8'];
//         ll encode = num1*base + num2;
//         F[i] = encode;
//     }
//     map<ll,int> mp;
//     mp[0] =1;
//     ll cnt =0;
//     for (int i =1; i<=n; i++)
//     {
//         cnt += mp[F[i]];
//         mp[F[i]]++;
//     }
//     cout<<cnt<<endl;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

string make_key(int x, int y, int z)
{
    return to_string(x) + ":" + to_string(y) + ":" + to_string(z);
}
int main()
{
    string s; cin >> s;
    map<string,int>mp;
    int d2 = 0, d8 = 0, dt = 0;
    ll ans = 0;
    mp[make_key(0, 0, 0)] = 1;
    for(char g : s)
    {
        if(g == '2') ++d2;
        if(g == '8') ++d8;
        if(g == 't') ++dt;
        
        int x = d2 - d8, y = d2 - dt, z = d8 - dt;
        
        string key = make_key(x, y, z);
        
        ans += mp[key];
        
        mp[key]++;
    }
    cout << ans;
}