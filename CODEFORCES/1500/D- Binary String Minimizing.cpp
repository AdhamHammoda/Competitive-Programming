#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set<ll>pos;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')pos.insert(i);
    }
    for(int i=*(pos.begin());i<n;i++)
    {
        if(!k)break;
        if(s[i]=='0' && (i>(*(pos.begin()))))
        {
            if(i-(*(pos.begin()))<=k)
            {
                swap(s[i],s[*(pos.begin())]);
                k-=i-(*(pos.begin()));
                pos.erase(*pos.begin());
                pos.insert(i);
            }
            else if(i>k)
            {
                auto x=pos.lower_bound(i-k);
                swap(s[i],s[*x]);
                break;
            }
        }
    }
    cout<<s<<endl;
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
