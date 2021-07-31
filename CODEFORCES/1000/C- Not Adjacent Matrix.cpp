#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
double pi=acos(-1);
void test_case()
{
    ll n;
    cin>>n;
    if(n==2)cout<<-1<<endl;
    else
    {
        vector<ll>v;
        for(int i=1;i<=n*n;i++)
        {
            if(2*i-1<=n*n)v.push_back(2*i-1);
        }
        for(int i=1;i<=n*n;i++)
        {
            if(2*i<=n*n)v.push_back(2*i);
        }
        for(int i=0;i<n*n;i++)
        {
            cout<<v[i]<<" ";
            if(i%n==n-1)cout<<endl;
        }
    }
}


int main(){
    IO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }

}