#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            for(int k=1;k<=9;k++)
            {
                for(int z=1;z<=9;z++)
                {
                    if(i+j==r1 && k+z==r2
                    && i+k==c1 && j+z==c2
                    && i+z==d1 && k+j==d2)
                    {
                        set<ll> s;
                        s.insert(i),s.insert(j);
                        s.insert(k),s.insert(z);
                        if(s.size()==4)cout<<i<<" "<<j<<endl<<k<<" "<<z,exit(0);
                    }
                }
            }
        }
    }
    cout<<-1;
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}