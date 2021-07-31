#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
typedef long long ll;
int const N=2e5+5;
int main()
{
     FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
ll n,m;
cin>>n;
vector<ll> v(n);
vector<ll> v2(n);
for(int i=0;i<n;i++)
{
    ll a;
    cin>>a;
    v[i]=a;
    v2[i]=a;
}
for(int i=1;i<n-1;i++)
{
    if((v[i]-v[i-1]>2 && v[i]-v[i+1]>2) || (v[i-1]-v[i]>2 && v[i+1]-v[i]>2))
    {
        cout<<-1;
        return 0;
    }
}
if(v[0]>v[n-1])
{
    reverse(v2.begin(),v2.end());
    reverse(v.end(),v.end());
}
if(v.size()==1 || v.size()==2)
{
    cout<<0;
    return 0;
}
priority_queue<ll> pq;
bool passed=false;
ll c=0;
for(int i=-1;i<2;i++)
{
    for( int j=-1;j<2;j++)
    {
        v[0]=v2[0]+i;
        v[1]=v2[1]+j;
        ll a=v[0];
        ll b=v[1];
        c=abs(i)+abs(j);
        for(int k=2;k<n;k++)
        {
            v[k]=v2[k];
            if(v[k]-v[k-1]>1+(b-a) || v[k]-v[k-1]<(b-a)-1)
            {
                break;
            }
            else
            {
                if(v[k]-v[k-1]==b-a+1)
                {
                    v[k]--;
                    c++;
                }
                else if(v[k]-v[k-1]==b-a-1)
                {
                    v[k]++;
                    c++;
                }
            }
            if(k==n-1)
            {
               pq.push(-c);
               passed=true;
            }
        }
    }
}
passed?cout<<-pq.top():cout<<-1;
}