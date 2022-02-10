#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    map<ll,ll>pos;
    ll mxr=0,mnl=0;
    while(n--)
    {
        char a;
        ll b;
        cin>>a>>b;
        if(a=='L')mnl--,pos[b]=mnl;
        else if(a=='R')mxr++,pos[b]=mxr;
        else
        {
            ll posleft=0,posright=0;
            if(pos[b]<0)posleft=pos[b]-mnl,posright=mxr+abs(pos[b])-1;
            else posleft=abs(mnl)+pos[b]-1,posright=mxr-pos[b];
            cout<<min(posright,posleft)<<endl;
        }
    }
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
