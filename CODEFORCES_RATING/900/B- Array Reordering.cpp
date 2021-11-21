#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
/// Number Theory
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll even=0;
    vector<ll>odd;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)even++;
        else odd.push_back(arr[i]);
    }
    ll c=0;
    for(int i=0;i<odd.size();i++)
    {
        for(int j=0;j<odd.size();j++)
        {
            if(i<j && __gcd(odd[i],2*odd[j])>1)
            {
                c++;
            }
        }
    }
    c+=even*n-(even*(even+1)/2);
    cout<<c<<endl;
}
int main()
{
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}

 