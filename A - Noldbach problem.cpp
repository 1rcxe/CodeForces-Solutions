    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
    vector<int> s(int n){
        vector<int> sieve(n+1,0);
        for (int x = 2; x <= n; x++) {
            if (sieve[x]) continue;
            for (int u = 2*x; u <= n; u += x) {
                sieve[u] = x;
            }
        }
        return sieve;
    }
     
     
    void solve(){
        int n , k;
        cin >> n >> k;
        vector<int> primes;
        vector<int> sieve = s(n);
        for(int i = 2 ; i<sieve.size() ;i++){
            if (sieve[i]==0){
            primes.push_back(i);
     
            }
        }
        int nb = 0;
        for(int i = 0 ; i < primes.size()-1;i++){
            int x = primes[i]+primes[i+1]+1 ;
     
            if (x <= n && sieve[x]==0)
            {
                nb++;
            }
     
        }
        if (nb < k){
            cout << "NO" <<endl;
        }
        else{
            cout << "YES" <<endl;
        }
     
     
     
    }
     
     
    int main(){
        int t;
        t = 1;
        while(t--){
            solve();
        }
     
    }
