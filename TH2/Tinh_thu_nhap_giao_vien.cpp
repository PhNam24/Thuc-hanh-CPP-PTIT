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
    string chucVu, ten;
    int luong;
    getline(cin, chucVu);
    getline(cin, ten);
    cin >> luong;
    int bacluong = 0, phucap;
    if ( chucVu[0] == 'H' )
    {
        if ( chucVu[1] == 'T' ) 
        {
            phucap = 2000000;
        }
        else phucap = 900000;
    }
    else phucap = 500000;
    for ( int i = 0; i < chucVu.size(); i++ )
    {
        if ( isdigit(chucVu[i]) ) bacluong = bacluong * 10 + chucVu[i] - '0';
    }
    cout << chucVu << " " << ten << " " << bacluong << " " << phucap << " " << bacluong * luong + phucap;
    return 0;
}