#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define yes cout << "YES\n";
#define no  cout << "NO\n";

using ll = long long;

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

#define ZolpiE ios_base::sync_with_stdio(false); cin.tie(nullptr);

string str;
int pos = 0;

bool s()
{
	if(str[pos] == '(')
	{
		pos++;

		if(!s()) return false;

		if(str[pos] !=')') return false;

		pos++;


		return s();
	}
	return true;
}

signed main() {
    ZolpiE

    int tc;
    cin >> tc;
    while (tc--) {

    cin>>str;

    pos = 0;
    int l  = str.size();
    if(s() && pos == l) cout<<"Valid"<<endl;
    else cout<<"Invalid"<<endl;
    

    }

    return 0;
}
