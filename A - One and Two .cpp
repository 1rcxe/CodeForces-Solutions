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
        vector<int> a(n);
        for(auto& i:a) cin >> i;
        int k = 1 ;
        int p1=1 , p2=1;
        for (int i = 0 ; i < n-1 ; i++){
            p1 = a[i];
            p2 = a[i+1];
            for (int j = i-1 ; j >=0 ; j--){
                p1*=a[j];
            }
            for (int j=i+1 ; j < n-1 ;j++){
                p2*=a[j+1];
            }
            if (p1==p2){
                cout << i+1<<endl;
                return;
            }
        }
        cout << -1 <<endl;
     
    }
    int main(){
     
        int t;
        cin >> t;
        while(t--){
            solve();
        }
    }
