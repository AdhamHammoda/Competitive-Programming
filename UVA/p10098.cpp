#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    do
    {
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));
    cout<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
    cin>>t;
    while(t--)
    {
        test_case();
    }
}
