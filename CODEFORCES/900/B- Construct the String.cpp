#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll j=0;
    for(int i=0;i<n;i++)
    {
        char a='a'+j%b;
        cout<<a;
        j++;
    }
    cout<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
