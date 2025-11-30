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
unordered_map<string,bool> mp;
bool checkIndentifierFirst(char ch)
{
	return (isalpha(ch) || ch == '_');
}
signed main() {
	ZolpiE
	mp["if"] = true;
	mp["else"] = true;
	mp["int"] = true;
	mp["for"] = true;
	mp["while"] = true;
	mp["return"] = true;
	mp["float"] = true;
	mp["double"] = true;
	mp["void"] = true;
	string str;
	while (cin>>str) {

		if(mp[str])
		{
			cout<<"Keyword : "<<str<<endl;
			continue; 
		}

		if(checkIndentifierFirst(str[0]))
		{
			int n = str.size();
			bool l = true;
			for(int i =1;i<n;i++)
			{
				if( !(isalnum(str[i]) || str[i] == '_') )
				{
					l = false;
					break;
				}
			}
			if(l)
			{
				cout<<"Identifier : "<<str<<endl;
				continue;
			}
		}
		cout<<"Invalid : "<<str<<endl;
	}

	return 0;
}
