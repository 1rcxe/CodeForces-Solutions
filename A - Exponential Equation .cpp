    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
     
    void solve(){
        int n;
        cin >> n ;
        if (n%2==0){
            cout << 1 << ' ' << n/2 <<endl;
        }
        else{
            cout << -1 <<endl;
        }
     
    }
     
    int main(){
        fast
        int t ;
        cin >> t;
        while(t--){
            solve();
        }
     
     
    }
