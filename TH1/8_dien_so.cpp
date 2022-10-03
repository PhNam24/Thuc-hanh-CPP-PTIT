#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        int Min = 1e9, Max = -1e9;
        int a[n], b[100000] = {};
        for ( int i = 0; i < n; i++ )
        {
            cin >> a[i];
            b[a[i]]++;
            Max = max(Max, a[i]);
            Min = min(Min, a[i]);
        }
        int cnt = 0;
        for ( int i = Min; i <= Max; i++ )
        {
            if ( !b[i] ) cnt++;
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}