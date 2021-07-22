#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-20-2021 , 4:52 pm
ll n,m,k;
vector<ll>v;
string arr[3]={"Carrots","Kiwis","Grapes"};
void test_case()
{
   ll x,y;
   cin>>x>>y;
   ll ans=m*(x-1)+y-1;
   ll ind=lower_bound(v.begin(),v.end(),ans)-v.begin();
   if(v[ind]==ans)
   {
       cout<<"Waste"<<endl;
   }
   else
   {
       ans-=ind;
       cout<<arr[ans%3]<<endl;
   }
}
int main()
{
    FIO
    ll t;
//    cin>>t;
//    t=1;
    cin>>n>>m>>k>>t;
    for(int i=0;i<k;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back(m*(a-1)+b-1);
    }
    sort(v.begin(),v.end());
    while(t--)
    {
        test_case();
    }
}
