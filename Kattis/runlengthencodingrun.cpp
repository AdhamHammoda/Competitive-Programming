#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    char a;
    cin>>a;
    string b;
    cin>>b;
    if(a=='E')
    {
        char c=b[0];
        ll tmp=0;
        for(auto x:b)
        {
            if(x!=c)
            {
                cout<<c<<tmp;
                c=x;
                tmp=1;
            }
            else tmp++;
        }
        cout<<c<<tmp;
    }
    else
    {
        stringstream is(b);
        char c;
        ll r;
        while(is>>c)
        {
            is>>r;
            for(int i=0;i<r;i++)cout<<c;
        }
    }
}
int main()
{
//    FIO
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
