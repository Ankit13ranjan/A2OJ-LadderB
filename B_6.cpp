#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt","w",stdout)
using namespace std;
int main()
{ 
    fast;
    ll n;
    cin>>n;
    vector<ll> arr;
    
    ll i;
    for(i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        arr.push_back(x);
    }
    
    ll start=0;
    ll end=n-1;

    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            start=i;
            break;
        }
    }
    
    for(i=start;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            end=i;
            break;

        }
    }

   reverse(arr.begin()+start,arr.begin()+end+1);

    
    
    
    if(is_sorted(arr.begin(),arr.end()))
    {
        cout<<"yes"<<endl;
        cout<<start+1<<" "<<end+1<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }

    
}
