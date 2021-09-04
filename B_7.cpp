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
    ll n,m;
    cin>>n>>m;

    unordered_map<string,string>mpp;

    ll i;
    for(i=0;i<m;i++)
    {
        string x,y;
        cin>>x>>y;
        if(x.size()>y.size())
        {
            mpp[x]=y;
        }
        else if(x.size()<=y.size())
        {
            mpp[x]=x;
        }
    }
    for(i=0;i<n;i++)
    {
        string x;
        cin>>x;
        cout<<mpp[x]<<" ";
    }
    cout<<endl;
    
}
