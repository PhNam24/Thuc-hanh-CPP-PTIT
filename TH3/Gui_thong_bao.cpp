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
        string s, tmp;
        getline(cin, s);
        stringstream ss(s);
        int d = 0;
        vector<string> v;
        while(ss >> tmp)
        {
            v.push_back(tmp);
        }
        for ( int i = 0; i < v.size(); i++ )
        {
            if ( d + v[i].size() + 1 <= 100 )
            {
                cout << v[i] << " ";
                d += v[i].size() + 1;
            }
            else break;
        }
        cout << endl;
    }
    return 0;
}