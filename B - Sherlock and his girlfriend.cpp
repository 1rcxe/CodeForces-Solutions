    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
     
    vector<int> s(int n){
        n++;
        vector<int> sieve(n+1,0);
        for (int x = 2; x <= n; x++) {
            if (sieve[x]) continue;
            for (int u = 2*x; u <= n; u += x) {
                sieve[u] = 1;
            }
        }
        return sieve;
    }
     
    void solve(){
        int n ;
        cin >> n ;
        vector<int> sieve = s(n);
        if (n > 2){
            cout << 2 <<endl;
        }
        else{
            cout << 1 <<endl;
        }
        for(int i = 2 ; i < n+2 ; i++){
            cout << sieve[i]+1 << ' ';
        }
        cout << '\n';
     
    }
     
     
    int main(){
        int t;
        t = 1;
        //cin >> t;
        while(t--){
            solve();
        }
    }
