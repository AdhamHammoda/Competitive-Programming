#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , strings
/// 7-2-2021 , 5:39 PM
void test_case()
{
    string s;
    cin>>s;
    map<char,ll>freq;
    for(auto x:s)x!='+'?freq[x-'0']++:freq[x]++;
    for(int i=1;i<=3;i++)
    {
        for(int j=0;j<freq[i];j++)
        {
            cout<<i;
            if(freq['+'])
            {
                cout<<'+';
                freq['+']--;
            }
        }
    }
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
