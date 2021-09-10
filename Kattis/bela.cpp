#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    map<char,vector<ll>>m;
    m['A']={11,11};
    m['K']={4,4};
    m['Q']={3,3};
    m['J']={20,2};
    m['T']={10,10};
    m['9']={14,0};
    m['8']={0,0};
    m['7']={0,0};
    ll n;
    cin>>n;
    n*=4;
    char a;
    cin>>a;
    ll sum=0;
    while(n--)
    {
        string s;
        cin>>s;
        sum+=m[s[0]][s[1]!=a];
    }
    cout<<sum;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
