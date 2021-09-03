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
        string s;    int n,t;
    cin>>n>>t;
    cin>>s;
    int i,j;
    for(i=0;i<t;i++)
    {
        for(j=0;j<n;j++)
        {
            char t;
            if(s[j]=='B' && s[j+1]=='G')
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
                j++;
            }
            
        }
        
    }
    cout<<s<<endl;
    
}
