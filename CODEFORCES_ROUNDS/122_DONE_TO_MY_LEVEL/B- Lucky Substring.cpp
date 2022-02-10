#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    cin>>s;
    map<char,ll>m;
    for(auto x:s)m[x]++;
    if(!m['4'] && !m['7'])cout<<-1;
    else cout<<(m['7']>m['4']?"7":"4");
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}