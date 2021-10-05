#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    vector<ll> v1,v2;
    ll sum1=0,sum2=0;
    bool lst=false;
    while(n--)
    {
        ll a;
        cin>>a;
        if(a>0)v1.push_back(a),sum1+=a,lst=false;
        else v2.push_back(-a),sum2-=a,lst=true;
    }
    if(sum1>sum2)cout<<"first";
    else if(sum2>sum1)cout<<"second";
    else
    {
        for(int i=0;i<min(v1.size(),v2.size());i++)
        {
            if(v1[i]!=v2[i])
            {
                if(v1[i]>v2[i])cout<<"first";
                else cout<<"second";
                return;
            }
        }
        cout<<(lst?"second":"first");
    }
}
int main()
{
//    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
