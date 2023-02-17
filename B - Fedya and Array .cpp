        #include <bits/stdc++.h>
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        #define ll long long int
        #define db double
        using namespace std;
        void solve(){
            ll x , y;
            cin >> x >> y ;
            ll siz = ((x-y)+(x-1-y)+1);
            cout << siz <<endl;
            for (ll i = y + 1; i <= x; i++)
            {
            cout << i << " ";
            }
            for (ll i = x - 1; i >= y; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        int main(){
            fast
            int t;
            cin >> t;
            while(t--){
                solve();
        }
        }
