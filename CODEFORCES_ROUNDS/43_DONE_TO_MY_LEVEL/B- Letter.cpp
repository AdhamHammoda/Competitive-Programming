#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    string s;
    getline(cin,s);
    string a;
    getline(cin,a);
    map<char,ll>m;
    for(int i=0;i<s.size();i++)if(s[i]!=' ')m[s[i]]++;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=' ')
        {
            if(m[a[i]])m[a[i]]--;
            else cout<<"NO",exit(0);
        }
    }
    cout<<"YES";
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