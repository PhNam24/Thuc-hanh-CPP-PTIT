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
        int d, m;
        cin >> d >> m;
        if ( m == 1 )
        {
            if ( d <= 19 ) cout << "Ma Ket";
            else cout << "Bao Binh";
        }
        if ( m == 2 )
        {
            if ( d <= 18 ) cout << "Bao Binh";
            else cout << "Song Ngu";
        }
        if ( m == 3 )
        {
            if ( d <= 20 ) cout << "Song Ngu";
            else cout << "Bach Duong";
        }
        if ( m == 4 )
        {
            if ( d <= 19 ) cout << "Bach Duong";
            else cout << "Kim Nguu";
        }
        if ( m == 5 )
        {
            if ( d <= 20 ) cout << "Kim Nguu";
            else cout << "Song Tu";
        }
        if ( m == 6 )
        {
            if ( d <= 20 ) cout << "Song Tu";
            else cout << "Cu Giai";
        }
        if ( m == 7 )
        {
            if ( d <= 22 ) cout << "Cu Giai";
            else cout << "Su Tu";
        }
        if ( m == 8 )
        {
            if ( d <= 22 ) cout << "Su Tu";
            else cout << "Xu Nu";
        }
        if ( m == 9 )
        {
            if ( d <= 22 ) cout << "Xu Nu";
            else cout << "Thien Binh";
        }
        if ( m == 10 )
        {
            if ( d <= 22 ) cout << "Thien Binh";
            else cout << "Thien Yet";
        }
        if ( m == 11 )
        {
            if ( d <= 22 ) cout << "Thien Yet";
            else cout << "Nhan Ma";
        }
        if ( m == 12 )
        {
            if ( d <= 21 ) cout << "Nhan Ma";
            else cout << "Ma Ket";
        }
        cout << endl;
    }
    return 0;
}