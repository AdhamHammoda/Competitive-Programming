#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    deque<char>dq;
    for(auto x:s)dq.push_back(x);
    vector<string> v;
    while(!dq.empty())
    {
        char a=dq.front();
        if(a-'0'>0)
        {
            string r="";
            r+=a;
            for(int i=0;i<dq.size()-1;i++)r+='0';
            v.push_back(r);
        }
        dq.pop_front();
    }
    cout<<v.size()<<endl;
    for (auto x:v)cout<<x<<" ";
    cout<<endl;
}
int main()
{
    FIO
    ll t;
    //    freopen("input.in","rt",stdin);
    //    freopen("output.txt","wt",stdout);
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
