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
        int n;
    int m;
    cin>>n>>m;
    int a[m];
    int i;
    ll c=0;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
 
    c=a[0]-1;
 
 
    for(i=0;i<m-1;i++)
    {
        if(a[i]<a[i+1])
        {
            c+=a[i+1]-a[i];
        }
        else if(a[i]>a[i+1])
        {
            c+=n-a[i]+a[i+1];
        }
    }
    cout<<c<<endl;
    
}
