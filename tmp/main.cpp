#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    ll c=0;
    for(int i=0;i<n;i++)
    {
        c+=(arr[i]!='3' && arr[i]!='6' && arr[i]!='9');
        c+=((arr[i]-'0')%2 && i==n-1);
    }
    c?cout<<"NO":cout<<"YES";
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
