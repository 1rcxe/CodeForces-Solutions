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
     
     
    int main(){
        int t ;
        cin >> t ;
        while (t--){
            int n ;
            cin >> n ;
            vector<int> v;
            for (int i = 0 ; i < n ; i++){
                int x ;
                cin >> x ;
                v.push_back(x);
            }
            sort(v.begin(),v.end());
            int operations=1000000001;
            for (int i = 0; i < n-2 ; i++){
                int currentoperations=0;
                if (v[i]!=v[i+1]){
                    currentoperations+=v[i+1]-v[i];
                }
                if (v[i+2]!=v[i+1]){
                    currentoperations+=v[i+2]-v[i+1];
                }
                if (currentoperations<operations){
                    operations=currentoperations;
                }
            }
            cout << operations << '\n';
        }
     
     
    }
