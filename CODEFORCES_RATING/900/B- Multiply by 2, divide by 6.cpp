#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll c=0;
    while(n>1)
    {
        if(n%6==0)
        {
            n/=6;
            c++;
            continue;
        }
        if(n%3==0)
        {
            n*=2;
            n/=6;
            c+=2;
            continue;
        }
        else
        {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<c<<endl;
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
