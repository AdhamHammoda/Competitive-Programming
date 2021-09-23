#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
ll n;
long double arr[60];
long double binpow(long double a,ll b)
{
    if(!b)return 1.0;
    long double ans=binpow(a,b/2);
    if(b%2)return ans*ans*a;
    else return ans*ans;
}
void test_case()
{
    cin>>n;
    long double sum=0.0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i]*binpow(4.0/5.0,i);
    }
    long double sum2=0.0;
    for(int i=0;i<n;i++)
    {
        bool b=false;
        for(int j=0;j<n;j++)
        {
            ll tmp=j;
            if(j==i)
            {
                b=true;
                continue;
            }
            if(b)tmp--;
            sum2+=arr[j]*binpow(4.0/5.0,tmp);
        }
    }
    cout<<fixed<<setprecision(13)<<sum/5.0<<endl<<sum2/(5.0 * (long double)n);
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
