#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    int n;
    cin>>n;
    vector<bool> v(n+1,1);
    v[0]=v[1]=false;
    int c=0;
    for(int i=2;i<=n;i++)
    {
        c+=(v[i]);
        if(v[i])for(int j=i+i;j<=n;j+=i)
        {
            v[j]=false;
        }
    }
    cout<<c<<endl;
    int q;
    cin>>q;
    while(q--)
    {
        cin>>n;
        cout<<v[n]<<endl;
    }
}
int main()
{
    FIO
//    freopen("input.in","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
    t=1;
//    cin>>t;
    while(t--)
    {
        test_case();
    }
}
