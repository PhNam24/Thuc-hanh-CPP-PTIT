#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    long long fb[100];
    fb[1] = 0;
    fb[2] = 1;
    for ( int i = 3; i < 100; i++ )
    {
        fb[i] = fb[i-1] + fb[i-2];
    } 
    test
    {
        long long n;
        cin >> n;
        int check = 1;
        for ( int i = 1; i < 100; i++ )
        {
            if ( n == fb[i] )
            {
                check = 0;
                break;
            }
        }
        if ( check ) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}