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
bool checkIndentifierFirst(char ch)
{
	return (isalpha(ch) || ch =='_');
}
bool checkNumberfirst(char ch) 
{
	return isdigit(ch);
}
void pr(vector<string> &arr)
{
	for(auto x: arr) cout<<x<<" ";
	cout<<endl;
}
signed main() {
    ZolpiE

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {

    string  str;

    getline(cin,str);

    int n = str.size();
    vector<string> iden,num;
    vector<char> sym;
    for(int i =0;i<n;i++)
    {
    	if(str[i] == ' ') continue;
    	string temp = "";
    	if(checkIndentifierFirst(str[i]))
    	{

    		temp += str[i++];

    		while(i<n && ( isalnum(str[i]) || str[i] == '_'))
    		{
    			temp+=str[i];
    			i++;
    		}
    		iden.push_back(temp);
    		continue;
    	}
    	if(i<n && checkNumberfirst(str[i]))
    	{
    		temp += str[i++];
    		while(isdigit(str[i]))
    		{
    			temp +=str[i];
    			i++;
    		}
    		num.push_back(temp);
    		continue;
    	}
    	sym.push_back(str[i]);
    }

    pr(iden);
    pr(num);

    for(auto &x : sym) cout<<x<<" ";
    cout<<endl;

    }

    return 0;
}
