    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    #include <cmath>
    using namespace std;
    void solve(){
        int n , r , s ;
        cin >> n >> s >> r ;
        cout << s - r << ' ';
        int b = n-1 ;
        for (int i = 0 ; i < n-1 ;i++){
            int a = r / b ;
            r = r - a ;
            b = b - 1 ;
            cout << a  << ' ';
            continue;
        }
        cout << endl;
     
    }
    int main(){
        fast
        int t;
        t = 1 ;
        cin >> t;
        while(t--){
            solve();
        }
    }
