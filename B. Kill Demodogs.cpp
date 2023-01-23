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
    ll n ;
    cin >> n;
    ll sum = n*(n+1)*(2*n+1) ;
     sum=sum/6;
     sum=sum-n*(n+1)/2;
    cout << (2022*sum)%1000000007 << '\n' ;

}



int main(){
    fast;
    int t ;
    cin >> t ;
    while (t--){
        solve ();
    }

}
