#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll sum=0;
    for(int i=0;i<5;i++)
    {
        string a;
        cin>>a;
        sum+=a[0]==s[0];
        sum+=a[1]==s[1];
    }
    sum?cout<<"YES":cout<<"NO";
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
