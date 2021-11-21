#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-10-2021 , 10:15 pm
void test_case()
{
    string tens[10]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string ones[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    string between[10]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    ll n;
    cin>>n;
    if(n<10)
    {
        cout<<ones[n%10];
    }
    else if(n==10)
    {
        cout<<"ten";
    }
    else if(n>10 && n<20)
    {
        cout<<between[n%11];
    }
    else
    {
        int ind=n/10;
        string s=tens[ind];
        if(n%10)s+="-"+ones[n%10];
        cout<<s;
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
