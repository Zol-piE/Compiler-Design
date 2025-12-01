#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define yes cout << "YES\n";
#define no  cout << "NO\n";

using ll = long long;

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

#define rep(a,b) for(ll i = (a); i < (b); i++)
#define ZolpiE ios_base::sync_with_stdio(false); cin.tie(nullptr);


signed main() {
    ZolpiE

    string str;

    // tomal bbbbbbbb //
    string intial = "";
    while(getline(cin,str))
    {
        intial+= str + '\n';
      }
    int n = intial.size();
    string res = "";
    /*
        dsfasdf
        asdfasd
        asdfasf
    */
    for(int i =0;i<n;i++)
    {
        if(intial[i] =='/' && intial [i+1]=='/')
        {
            while(intial[i] != '\n')
            {
                i++;
            }
        }
        if(intial[i] == '/' && intial[i+1] =='*')
        {
            while(!(intial[i] =='*' && intial[i+1] =='/'))
            {
                i++;
            }
            i++;
            i++;
        }
        res+=intial[i];
    }
    cout<<res<<endl;
    return 0;
}
