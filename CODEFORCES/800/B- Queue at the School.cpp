#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    while(k--)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')swap(s[i],s[i+1]),i++;
        }
    }
    cout<<s;
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
