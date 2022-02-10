#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll cup;
    cin>>cup;
    for(int i=0;i<3;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(a==cup)swap(cup,b);
        else if(b==cup)swap(cup,a);
    }
    cout<<cup;
}
int main()
{
    FIO
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}