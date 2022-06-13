#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ld;
void test_case()
{
    ll a,b;
    cin>>a>>b;
    if(b-a>0)cout<<"Dr. Chaz will have "<<b-a<<" piece"<<(b-a==1?"":"s")<<" of chicken left over!";
    else cout<<"Dr. Chaz needs "<<a-b<<" more piece"<<(a-b==1?"":"s")<<" of chicken!";
}
int main()
{
    FIO
    ll t;
    t=1;
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
