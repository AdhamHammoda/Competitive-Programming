#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n,ts;
void test_case()
{
    ts++;
    string arr[n];
    set<pair<ll,string>>s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<string> v1(n/2 + n%2);
    vector<string> v2(n/2);
    ll c=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)v1[i/2]=arr[i];
        else v2[i/2]=arr[i];
    }
    cout<<"SET "<<ts<<endl;
    for(auto x:v1)cout<<x<<endl;
    reverse(v2.begin(),v2.end());
    for(auto x:v2)cout<<x<<endl;
}
int main()
{
//    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(cin>>n)
    {
        if(!n)break;
        test_case();
    }
}
