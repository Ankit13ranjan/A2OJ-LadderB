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
    ll N,M;
    cin>>N>>M;
    ll maxiim=N-(M-1);
    ll maxiimresult = maxiim*(maxiim-1)/2;
    ll que = N/M;
    ll rem = N%M;
    ll miniim=((M-rem)*(que)*(que-1)/2) + (rem*(que+1)*(que)/2);
    cout<<miniim<<" ";
    cout<<maxiimresult<<endl;
}
