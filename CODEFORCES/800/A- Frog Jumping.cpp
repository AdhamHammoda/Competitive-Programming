#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
double pi=acos(-1);
void test_case()
{
    ll a,b,k;
    cin>>a>>b>>k;
    cout<<(k/2  + k%2)*a - (k/2)*b<<endl;
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