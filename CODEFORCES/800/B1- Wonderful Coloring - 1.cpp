#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll n=s.size();
    map<char,ll>freq;
    for(int i=0;i<s.size();i++)
    {
        freq[s[i]]++;
        if(i)
        {
            if(freq[s[i]]>2)
            {
                n--;
            }
        }
    }
    cout<<n/2<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}