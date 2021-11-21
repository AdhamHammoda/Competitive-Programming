#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 , 5:26 AM
void test_case()
{
    ll n;
    cin>>n;
    deque<ll>dq;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        dq.push_back(a);
    }
    ll sum1=0;
    ll sum2=0;
    ll i=0;
    while(!dq.empty())
    {
        if(dq.front()<=dq.back())
        {
           if(i%2)
           {
               sum2+=dq.back();
               dq.pop_back();
           }
           else
           {
               sum1+=dq.back();
               dq.pop_back();
           }
        }
        else
        {
            if(i%2)
            {
               sum2+=dq.front();
               dq.pop_front();
            }
            else
            {
               sum1+=dq.front();
               dq.pop_front();
            }
        }
        i++;
    }
    cout<<sum1<<" "<<sum2;
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
