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
        int walice = 1 , wbob = 0 , bbob=0 , balice=0;
        int i = 0;
        int num = 1 ;
        n--;
        while (n > 0){
     
            if (i%2==0){
                if (n >= num+4){
                    bob += num+4;
                    n-=num+4;
                    num=num+4;
                    bbob+=num-num/2;
                    wbob+=num/2;
     
                }
                else {
                    bob += n;
                    num=num+4;
                    bbob+=n-n/2;
                    wbob+=n/2;
                    n=0;
                }
                i++;
     
                }
            else{
                if (n >= num+4){
                    alice += num+4;
                    n-= num+4;
                    num=num+4;
                    walice+=num-num/2;
                    balice+=num/2;
     
                }
                else {
                    alice += n;
                    num=num+4;
                    walice+= n-n/2;
                    balice+=n/2;
                    n=0;
                }
                i++;
            }
     
     
     
        }
            cout << walice << ' ' << balice << ' ' << wbob << ' ' << bbob << ' ' <<endl;
     
    }
    int main(){
        int t ;
        cin >> t ;
        while(t--){
            solve();
        }
    }
