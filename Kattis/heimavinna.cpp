#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    stringstream is(s);
    ll a=0;
    ll sum=0;
    while(is>>a)
    {
        char b;
        is>>b;
        if(b=='-')
        {
            ll c;
            is>>c;
            sum+=c-a+1;
            is>>b;
        }
        else sum++;
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
