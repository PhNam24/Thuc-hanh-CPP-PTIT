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
        long long n;
        cin >> n;
        long long sum = 0;
        int m = sqrt(n);
        for ( int i = 1; i <= m; i++ )
        {
            if ( n % i == 0 ) sum += i + n / i;
            if ( i * i == n ) sum -= i;
        }
        cout << sum;
        cout << endl;
    }
    return 0;
}