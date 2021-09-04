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
    ll n,l;
    cin>>n>>l;

    ll arr[n];
    ll i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    sort(arr,arr+n);

    ll res = 2*max(arr[0]-0,l-arr[n-1]);

    for(i=0;i<n-1;i++)
    {
        res = max(res,arr[i+1]-arr[i]);
    }

    printf("%.10f\n",res/2.);
    
}
