#include<bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll prev=0;
    string mv="";
    ll ptr1=0,ptr2=n-1,inc=0;
    while(ptr1<=ptr2)
    {
        ll a=arr[ptr1];
        ll b=arr[ptr2];
        if(a==b && a>prev)
        {
            ll ri=1,le=1;
            ll originptr1=ptr1,originptr2=ptr2;
            while(ptr2>originptr1)
            {
                if(arr[ptr2-1]>arr[ptr2])ri++;
                else break;
                ptr2--;
            }
            while(ptr1<originptr2)
            {
                if(arr[ptr1+1]>arr[ptr1])le++;
                else break;
                ptr1++;
            }
            string rig(ri,'R');
            string lef(le,'L');
            ri>=le?mv+=rig:mv+=lef;
            cout<<mv.size()<<endl<<mv;
            return;
        }
        ll mn=min(a,b);
        ll mxx=max(a,b);
        if(mn>prev)
        {
            if(mn==a)
            {
                prev=a;
                mv.push_back('L');
                ptr1++;
            }
            else
            {
                prev=b;
                mv.push_back('R');
                ptr2--;
            }
        }
        else if(mxx>prev)
        {
            if(mxx==a)
            {
                prev=a;
                mv.push_back('L');
                ptr1++;
            }
            else
            {
                prev=b;
                mv.push_back('R');
                ptr2--;
            }
        }
        else break;
    }
    cout<<mv.size()<<endl<<mv;
}
int main()
{
    //    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
