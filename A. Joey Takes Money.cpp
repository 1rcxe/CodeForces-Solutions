#include <bits/stdc++.h>
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

void solve(){
    int n ;
    cin >> n;
    ll product = 1 ;
    for (int i = 0 ; i<n;i++){
        ll x ;
        cin >> x ;
        product = product * x;
    }
    product = (product + n - 1)*2022;
    cout << product << '\n';

}




int main(){
    fast;
    int t ;
    cin >> t ;
    while (t--){
        solve ();
    }

}
