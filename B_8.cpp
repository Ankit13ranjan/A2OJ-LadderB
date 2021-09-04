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
    string s;
    cin>>s;

    ll n=s.size();
    ll j=-1;
    ll i;
    for(i=0;i<n-1;i++)
    {
        if((s[i]-'0')%2==0)
        {
            if(s[i]<s[n-1])
            {
                j=i;
                break;
            }
            else
            {
                j=i;
            }
        }
        
    }
    if(j==-1)
    {
        cout<<j<<endl;
    }
    else 
    {
        swap(s[j],s[n-1]);
        cout<<s<<endl;
    }
    
}
