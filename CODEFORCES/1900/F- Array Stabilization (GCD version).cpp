#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
const ll N=1e6+2;
set<ll> primes[N];
void test_case()
{
    ll n,k;
    cin>>n;
    ll arr[n];
    bool neq=false;
    ll gc=1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i)neq+=(arr[i]!=arr[i-1]),gc=__gcd(arr[i],gc);
        else gc=arr[0];
    }
    if(!neq)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]/=gc;
        ll tmp=arr[i];
        for(int j=2;j*j<=tmp;j++)
        {
            if(tmp%j==0)
            {
                primes[i].insert(j);
                while(tmp%j==0)tmp/=j;
            }
        }
        if(tmp!=1)primes[i].insert(tmp);
    }
    ll c=0;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        for(auto x:primes[i])
        {
            ll ptr1=(i-1+n)%n;
            ll ptr2=i;
            ll c=0;
            while(primes[ptr1].find(x)!=primes[ptr1].end())
            {
                primes[ptr1].erase(x);
                ptr1--;
                if(ptr1<0)ptr1=n-1;
                c++;
            }
            while(primes[ptr2].find(x)!=primes[ptr2].end())
            {
                if(ptr2!=i)primes[ptr2].erase(x);
                (ptr2++)%n;
                c++;
            }
            mx=max(mx,c);
        }
        primes[i].clear();
    }
    cout<<mx<<endl;
}
int main()
{
    FIO
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
