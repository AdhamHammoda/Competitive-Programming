#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    ll c=0;
    for(int i=0;i<s1.size();i++)
    {
        c+=((s1[i]!=s2[i] && n%2==0)||(s1[i]==s2[i] && n%2));
    }
    c?cout<<"Deletion failed":cout<<"Deletion succeeded";
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
