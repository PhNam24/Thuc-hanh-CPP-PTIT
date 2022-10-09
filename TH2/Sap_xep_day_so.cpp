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
        int n, m;
        cin >> n >> m;
        int a[n];
        int Max = -1e9;
        vector<int> am;
        vector<int> duong;
        for ( int &i : a ) 
        {
            cin >> i;
            Max = max(Max, i);
            if ( i < 0 ) am.push_back(i);
            else duong.push_back(i);
        }
        int check = 0;
        for ( int i : am )
        {
            if ( i == Max && !check )
            {
                cout << m << " ";
                check = 1;
            }
            
            cout << i << " ";
        }
        for ( int i : duong )
        {
            if ( i == Max && !check )
            {
                cout << m << " ";
                check = 1;
            }
            
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}