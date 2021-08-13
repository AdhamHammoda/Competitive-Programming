#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll c=1;
    ll mx=0;
    for(int i=0;i<s.size();i++)
    {
        if(i)
        {
            if(s[i]==s[i-1])c++;
            else
            {
                mx=max(mx,c);
                c=1;
            }
        }
    }
    mx=max(mx,c);   
    cout<<mx;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
