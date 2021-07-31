#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
int main()
{
    ll n,k;
    cin>>n;
    vector<double> v(n);
    for(auto &x:v)cin>>x;
    vector<double>v2(n-1);
    ll c=0,mx=0;
    for(int i=0;i<n-1;i++)
    {
        v2[i]=v[i+1]/v[i];
        if(v2[i]<=2)
        {
            c++;
            mx=max(mx,c);
        }
        else
        {
            c=0;
        }
    }
    cout<<mx+1;
}