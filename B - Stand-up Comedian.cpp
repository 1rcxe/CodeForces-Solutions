#include <bits/stdc++.h>
#include <algorithm>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define db double
using namespace std;
 
ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;}
ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);}
 
ll isprime(int n){
    for(int i=2;i*i<=n;i++)if(n%i==0)return 0;
    return n!=1;
    }
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{return (a.second < b.second);
}
// Using sort() function to sort by 2nd element
// of pair
//sort(vect.begin(), vect.end(), sortbysec);
 
int main(){
    ll t;
    cin >> t;
    while(t--){
    vector<ll> v(4);
    for (int i = 0 ; i < 4 ; i ++){
        cin >> v[i];
    }
    if (v[0]==0){
        cout << 1 << endl;
    }
    else{
    ll x=v[0];
    ll ans= v[0] ;
    int y = min(v[1],v[2]);
    ans+=2*y;
    v[1]-=y;
    v[2]-=y;
    ans+=(min(v[1]+v[2]+v[3],x+1));
    cout << ans << endl;}
}
 
}
