#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    vector<ll> v1,v2;
    ll sum1=0,sum2=0;
    for(int i=1;i<100000;i+=2)
    {
        sum1+=i*i;
        sum2+=(i+1)*(i+1);
        v1.push_back(sum1);
        v2.push_back(sum2);
    }
    ll n;
    cin>>n;
    ll mx=0;
    ll it1=lower_bound(v1.begin(),v1.end(),n)-v1.begin();
    ll it2=lower_bound(v2.begin(),v2.end(),n)-v2.begin();
    mx=max(it1+(v1[it1]==n),it2+(v2[it2]==n));
    cout<<mx;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
