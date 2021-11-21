#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll mn1=min(a,b),mn2=min(c,d),mx1=max(a,b),mx2=max(c,d);
    if(mn1!=mn2)cout<<mn1<<" "<<mn2<<endl;
    else if(mn1!=mx2)cout<<mn1<<" "<<mx2<<endl;
    else if(mx1!=mn2)cout<<mx1<<" "<<mn2<<endl;
    else cout<<mx1<<" "<<mx2<<endl;
}
int main()
{
//    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}