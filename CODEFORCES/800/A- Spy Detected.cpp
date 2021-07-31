#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
double pi=acos(-1);
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,vector<ll>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]].push_back(i);
    }
    for(auto x:m)
    {
        if(x.second.size()==1)
        {
            cout<<x.second[0]+1<<endl;
            break;
        }
    }
}


int main(){
    IO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }

}