#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
double pi=acos(-1);
void test_case()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    multiset<char>ms;
    bool susp=true;
    for(int i=0;i<n;i++)
    {
        if(i)
        {
            if(ms.find(s[i])!=ms.end() && s[i]!=s[i-1])
            {
                susp=false;
                break;
            }
            else ms.insert(s[i]);
        }
        else ms.insert(s[i]);
    }
    !susp?cout<<"NO"<<endl:cout<<"YES"<<endl;
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