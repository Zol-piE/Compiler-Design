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

using vi = vector<int>;



signed main() {
    ZolpiE

    int tc;
    cin >> tc;
    while (tc--) {

    	string str; cin>>str;
    	int state = 0;
    	for(char c : str)
    	{
    		if(c=='1')
    		{
    			state = 1 - state;
    		}
    	}
    	if(state == 0) cout<<"Accepted"<<endl;
    	else cout<<"Rejected"<<endl;
    }

    return 0;
}
