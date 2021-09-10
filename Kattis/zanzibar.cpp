#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll prev,a;
    cin>>prev;
    ll sum=0;
    while(cin>>a)
    {
        if(!a)
        {
            cout<<sum<<endl;
            return;
        }
        if(a>prev*2)sum+=a-prev*2;
        prev=a;
    }
    cout<<sum<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
