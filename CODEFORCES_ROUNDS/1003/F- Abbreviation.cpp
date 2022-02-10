#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
ll dp[303][303];
string s[303];
ll n;
void test_case()
{
    cin>>n;
    ll sum=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        sum+=s[i].size();
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(s[i]==s[j])
            {
                if(i+1<n && j+1<n)dp[i][j]=dp[i+1][j+1]+1;
                else dp[i][j]=1;
            }
        }
    }
    ll mn=sum;
    for(int i=0;i<n;i++)
    {
        ll tmp=0;
        for(int j=0;i+j<n;j++)
        {
            tmp+=s[i+j].size();
            ll c=1;
            for(int k=i+j+1;k<n;k++)
            {
                if(dp[i][k]>j)c++,k+=j;
            }
            ll tot=sum-c*tmp+c;
            if(mn>tot && c>1)mn=tot;
        }
    }
    cout<<mn;
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
