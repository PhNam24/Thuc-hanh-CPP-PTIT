#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct info
{
    string date, name, contact;
};

bool cmp (info a, info b)
{
    stringstream ss1(a.name);
    stringstream ss2(b.name);
    string tmp1, tmp2;
    vector<string> v1, v2;
    while(ss1 >> tmp1)
    {
        v1.push_back(tmp1);
    }
    while(ss2 >> tmp2)
    {
        v2.push_back(tmp2);
    }
    if ( v1[v1.size() - 1] != v2[v2.size() - 1] ) return v1[v1.size() - 1] < v2[v2.size() - 1];
    return v1[v1.size() - 2] < v2[v2.size() - 2];
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    ifstream in{"SOTAY.txt"};
    ofstream out{"DIENTHOAI.txt"};
    string s, date, name;
    vector<info> v;
    while(getline(in, s))
    {
        string tmp = "";
        stringstream ss(s);
        while(ss >> tmp) break;
        if ( tmp == "Ngay" )
        {
            string tmp1;
            for ( int i = 5; i < s.size(); i++ )
            {
                tmp1.push_back(s[i]);
            }
            date = tmp1;
        }
        else if ( isalpha(s[0]) ) name = s;
             else 
             {
                v.push_back({date, name, s});
             } 
    }
    sort(v.begin(), v.end(), cmp);
    for ( auto i : v ) out << i.name << ": " << i.contact << " " << i.date << endl;
    in.close();
    out.close();
    return 0;
}