#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll l,r,x,y,k;
    cin>>l>>r>>x>>y>>k;
    ll mnexp=x,mxexp=y;
    if(k*x<l)mnexp=l;
    else mnexp*=k;
    if(r<k*y)mxexp=r;
    else mxexp*=k;
    ll mncost=mnexp/k,mxcost=mxexp/k;
    if(mncost<mxcost ||(mncost==mxcost && (mnexp%k==0)))cout<<"YES";
    else cout<<"NO";
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
