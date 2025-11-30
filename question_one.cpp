
#include <bits/stdc++.h>
using namespace std;

string str;
int pos =0;

char peek() {
    return str[pos];
}

// id → letter_or_underscore (letter_or_digit_or_underscore)*
bool id() {
    if (!(isalpha(peek()) || peek() == '_'))
        return false;

    pos++; // consume first char

    while (isalnum(peek()) || peek() == '_')
        pos++;

    return true;
}

// L → id | id , L
bool L() {
    if (!id()) return false;

    if (peek() == ',') {
        pos++;         // consume comma
        return L();    // recursive call
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        getline(cin,str);
        str.erase(remove(str.begin(),str.end(),' '),str.end());
        pos = 0;
        int l = str.size();
        if (L() && pos == l)
            cout << "valid\n";
        else
            cout << "Not valid\n";
    }
}
