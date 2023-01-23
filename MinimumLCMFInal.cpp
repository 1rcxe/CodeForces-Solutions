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
        cin >> n ;
        if (isprime(n)){
            cout << n-1 << ' ' << 1 <<'\n';
        }
        else if(n%2==0){
            cout << n/2 << ' ' << n/2 << '\n';
        }
        else {
            int i = 3 ;
            while (n%i && i*i<=n)i+=2;
            int x = max(i,n/i);
            cout << x << ' '<< n-x<<endl;
        }

}
int main (){
    int t;
    fast;
    cin >> t ;
    while (t--){
        solve();
    }
    return 0 ;




}
