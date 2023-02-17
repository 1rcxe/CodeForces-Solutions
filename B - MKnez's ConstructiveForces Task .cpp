    #include <bits/stdc++.h>
    #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long int
    #define db double
    using namespace std;
     
    void solve(){
        int n ;
        cin >> n;
        if (n!=3){
            cout << "YES" <<endl;
            if (n % 2 ==0){
                for (int i = 0 ; i < n/2 ; i++){
                cout << -1 << " " << 1 <<endl;
            }
            }
            else{
                int a = n / 2 ;
                int b = 0;
                b-=a;
                for (int i= 0 ; i <n/2 ; i++){
                    cout << a-1 << " " << b << " ";
                }
                cout << a-1 <<endl;
            }
        }
        else{
     
            cout << "NO" <<endl;
        }
     
    }
     
     
    int main(){
        fast
        int t ;
        cin >> t;
        while (t--){
            solve();
        }
    }

