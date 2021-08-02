#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    map<char,ll>freq;
    int mn=1e5,mx=0;
    for(auto x:s)
    {
        freq[x]++;
        if(freq[x]>=2)
        {
            cout<<"No"<<endl;
            return;
        }
        mx=max(mx,x-'a');
        mn=min(mn,x-'a');
    }
    if(mx-mn+1==s.size())
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
int main()
{
//    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}