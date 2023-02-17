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
            vector<ll>a(n);
            for(auto& i:a) cin >> i;
            sort(a.begin(),a.end());
            ll s = 0;
            if (a[0]>1){
                s+=a[0]-1;
                a[0]=1;
            }
            for(int i=1 ; i < n ;i++){
                if (a[i]-a[i-1]>1){
                    s=s+a[i]-(a[i-1]+1);
                    a[i]=a[i]-(a[i]-(a[i-1]+1));
                }
                else{
                    continue;
                }
            }
            cout << s <<endl;
     
        }
        int main(){
            int t ;
            cin >> t;
            while(t--){
                solve();
     
            }
     
        }
