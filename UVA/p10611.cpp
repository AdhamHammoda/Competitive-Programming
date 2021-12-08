#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    set<ll> s;
    ll a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
    ll q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>a;
        auto it=s.upper_bound(a);
        ll x=0,y=0;
        if(it==s.end())y=4e18;
        else y=(*it);
        it=s.upper_bound(a);
        if(it==s.end())it--;
        while(*(it)>=a && it!=s.begin())it--;
        if(it==s.begin() && (*(it))>=a)x=4e18;
        else x=*(it);
        if(x!=4e18)cout<<x<<" ";
        else cout<<"X"<<" ";
        if(y!=4e18)cout<<y;
        else cout<<"X";
        cout<<endl;
    }

}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
