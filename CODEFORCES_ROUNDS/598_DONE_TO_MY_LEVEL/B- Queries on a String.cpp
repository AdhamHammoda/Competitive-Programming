#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    ll q;
    cin>>q;
    while(q--)
    {
        ll a,b,k;
        cin>>a>>b>>k;
        k%=(b-a+1);
        a--,b--;
        rotate(s.begin()+a,s.begin()+(b+1-k),s.begin()+b+1);
    }
    cout<<s<<endl;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}