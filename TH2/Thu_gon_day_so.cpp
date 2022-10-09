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
    int n;
    cin >> n;
    int a[n];
    int ans = n;
    for ( int &i : a ) cin >> i;
    if ( n < 2 ) cout << n;
    else
    {
        while (1)
        {
            for ( int i = 0; i < n - 1; i++ )
            {
                if ( (a[i] + a[i + 1]) % 2 == 0 ) 
                {
                    n -= 2;
                    int tmp = i;
                    for ( int j = tmp; j < n; j++ )
                    {
                        a[j] = a[j + 2];
                    }
                }
            }
            if ( ans == n ) break;
            else ans = n;
        }
        cout << ans;
    }
    return 0;
}