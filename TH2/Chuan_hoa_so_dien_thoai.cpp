#include <bits/stdc++.h>
#define test int t; cin >> t; cin.ignore(); while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string s, ans;
        getline(cin, s);
        for ( int i = 0; i < s.size(); i++ )
        {
            if ( isdigit(s[i]) ) ans.push_back(s[i]);
        }
        if ( ans[0] == '8' && ans[1] == '4' ) 
        {
            cout << 0;
            for ( int i = 2; i < ans.size(); i++ ) cout << ans[i];
        }
        else cout << ans;
        cout << endl;
    }
    return 0;
}