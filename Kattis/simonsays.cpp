#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    n++;
    while(n--)
    {
        string s;
        getline(cin,s);
        if(s.find("Simon says")!=string::npos)
        {
            for(int i=11;i<s.size();i++)
            {
                cout<<s[i];
            }
            cout<<endl;
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
