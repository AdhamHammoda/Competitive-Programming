#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-16-2021 , 9:18 pm
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    deque<char>dq;
    if(n%2)
    {
        for(int i=0;i<n;i++)
        {
            if(i%2)dq.push_front(s[i]);
            else dq.push_back(s[i]);
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(i%2)dq.push_back(s[i]);
            else dq.push_front(s[i]);
        }
    }
    for(auto x:dq)cout<<x;
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
