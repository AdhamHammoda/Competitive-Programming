#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation 
/// 7-6-2021 , 9:59 pm
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,ll>m;
    ll sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(i%2)
        {
            m[s[i-1]]++;
            if(m[tolower(s[i])])m[tolower(s[i])]--;
            else sum++;
        }
    }
    cout<<sum;
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
