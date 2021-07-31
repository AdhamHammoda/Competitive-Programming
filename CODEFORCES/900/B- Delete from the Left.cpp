#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll t;
void test_case()
{
    string s1,s2;
    ll s=1e18,lst=-1;
    cin>>s1>>s2;
    s=min(s1.size(),s2.size());
    for(int i=0; i<s; i++)
    {
        if(s1[s1.size()-i-1]==s2[s2.size()-i-1])lst=i;
        else break;
    }
    cout<<s1.size()+s2.size()-(2*(lst+1));

}

int main()
{
    FIO
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}