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
        int p=1;
        for(auto& i:a){
        cin >> i;
        }
        int c = count(a.begin(),a.end(),2);
        if (c!=0){
            if (c%2==1){
                cout << -1 <<endl;
            }
            else {
                c=c/2;
                int nb = 0 , i =0 ;
                bool flag = true;
                while (i<n && flag ){
                    if (a[i]==2){
                        nb++;
                    }
                    if (nb==c){
                        flag=false;
                    }
                    i++;
                }
                cout << i <<endl;
            }
        }
        else{
            cout << 1 <<endl;
        }
    }
    int main(){
     
        int t;
        cin >> t;
        while(t--){
            solve();
        }
    }
     
