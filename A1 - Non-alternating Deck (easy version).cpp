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
        int alice = 1 ,bob= 0;
        int i = 0;
        int num = 1 ;
        n--;
        while (n > 0){
     
            if (i%2==0){
                if (n >= num+4){
                    bob += num+4;
                    i++;
                    n-=num+4;
     
                }
                else {
                    bob += n;
                    n=0;
                }
                num=num+4;
     
                }
            else{
                if (n >= num+4){
                    alice += num+4;
                    i++;
                    n-= num+4;
     
                }
                else {
                    alice += n;
                    n=0;
                }
                num=num+4;
            }
     
        }
        cout << alice << ' ' <<bob <<endl;
     
    }
    int main(){
        int t ;
        cin >> t ;
        while(t--){
            solve();
        }
    }
