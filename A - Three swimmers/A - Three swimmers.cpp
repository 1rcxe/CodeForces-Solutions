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
        ll p,a,b,c;
        cin >> p >> a >> b >> c ;
        if (p%a==0 || p%b==0 || p%c == 0){
            cout << 0 << '\n';
        }
        else{
            ll x1,x2,x3;
            x1=a-p%a;
            x2=b-p%b;
            x3= c-p%c;
            cout << min(min(x1,x2) , x3) << '\n';
        }
    }
    int main (){
        int t ;
        cin >> t ;
        while (t--){
            solve();
        }
     
    }
