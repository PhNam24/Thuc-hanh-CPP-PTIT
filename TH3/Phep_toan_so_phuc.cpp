#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct SoPhuc
{
    int thuc, ao;
};

SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b)
{
    SoPhuc c;
    c.thuc = (a.thuc + b.thuc) * (a.thuc + b.thuc) - (a.ao + b.ao) * (a.ao + b.ao);
    c.ao = 2 * (a.thuc + b.thuc) *(a.ao + b.ao);
    return c;
}

void hien_thi (SoPhuc a)
{
    cout << a.thuc << " + " << a.ao << "i";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}