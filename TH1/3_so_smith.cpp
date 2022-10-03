#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'

using namespace std;

int sum ( int n )
{
    int res = 0;
    while(n > 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    int sum1 = sum(n), sum2 = 0;
    int m = sqrt(n);
    for ( int i = 2; i <= m; i++ )
    {
        while(n % i == 0)
        {
            sum2 += sum(i);
            n /= i;
        }
    }
    if ( n > 1 ) sum2 += sum(n);
    if ( sum1 == sum2 ) cout << "YES";
    else cout << "NO";
    return 0;
}