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
    test
    {
        cin.ignore();
        string s;
        getline(cin, s);
        int n;
        cin >> n;
        ll ans = 0;
        ll x;
        for ( int i = 0; i < n; i++ )
        {
            cin >> x;
            if ( x < 0 ) ans += abs(x);
        }
        if ( ans >= 100000000 ) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}