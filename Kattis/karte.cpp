#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    map<char,ll>m;
    map<string,ll>c;
    m['P']=m['K']=m['H']=m['T']=13;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        char x=s[i];
        if(x>='A' && x<='Z')
        {
            c[s.substr(i,3)]++;
            if(c[s.substr(i,3)]>1)
            {
                cout<<"GRESKA";
                return;
            }
            m[x]--;
        }
    }
    cout<<m['P']<<" "<<m['K']<<" "<<m['H']<<" "<<m['T'];
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
