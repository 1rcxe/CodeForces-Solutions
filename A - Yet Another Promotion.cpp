        #include <bits/stdc++.h>
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        #define ll long long int
        #define db double
        using namespace std;
        void solve(){
            ll a , b , n, m;
            cin >> a >> b ;
            cin >> n >> m ;
            ll ans = 0,k,k1=n/(m+1),k2=n%(m+1);
            if (n%(m+1)==0){
                k=k1*a*m;
            }
            else{
                k=k1*a*m;
                k+=min(k2*b,k2*a);
            }
            ll l=min(n*a,n*b);
            cout << min(l,k)<<endl;
        }
        int main(){
            fast
            int t;
            cin >> t;
            while(t--){
                solve();
            }
        }
