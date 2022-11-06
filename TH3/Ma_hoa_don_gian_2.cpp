#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    string s;
    getline(cin, s);
    for ( int i = 0; i < s.size(); i++ )
    {
        if ( s[i] >= 'A' && s[i] <= 'Z' )
        {
            if ( s[i] == 'Y' ) s[i] = 'A';
            else if ( s[i] == 'Z' ) s[i] = 'B';
                 else s[i] += 2;
        }
        else if ( s[i] >= 'a' && s[i] <= 'z' )
        {
            if ( s[i] == 'a' ) s[i] = 'y';
            else if ( s[i] == 'b' ) s[i] = 'z';
                 else s[i] -= 2;
        }
    }
    cout << s;
    return 0;
}