    #include <bits/stdc++.h>
    using namespace std;
    #define endl "\n"
    #define fast ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    typedef priority_queue<int> PQI;
    typedef __int128 lll;
    #define ll long long int
    #define db double
    #define fl float
    #define lld long long double
    #define pb push_back
    #define F first
    #define S second
    #define mp(x, y) make_pair(x, y)
    #define yes cout << "YES" << endl;
    #define no cout<<"NO"<<endl;
    #define affichi(v,n) for(int i=0;i<n;i++)cout<<v[i]<<'-';
    const ll mod= 1e9+7;
    // #define fr(i,a,b) for(ll i = a; i < b; i++)
    #define all(x) x.begin(),x.end()
    #define allr(x) x.rbegin(),x.rend()
    const int Nmax=100005;
    #define cube(u) (u)*(u)*(u)
    ll gcd(ll a , ll b) {return b ? gcd(b , a % b) : a ;}
    ll lcm(ll a , ll b) {return (a * b) / gcd(a , b);}
    ll inv(ll N) {if (N == 1) return 1; return (mod - ((mod / N) * inv(mod % N)) % mod) % mod;}
     
     
    void local()
    {
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
    }
     
     
     
    //Prime ?
    bool prime(int n) {
        if (n < 2) return false;
        for (int x = 2; x*x <= n; x++) {
        if (n%x == 0) return false;
        }
        return true;
    }
    //All Prime_Factors Vector
     
     
     
    vector<int> factors(int n) {
        vector<int> f;
        for (int x = 2; x*x <= n; x++) {
            while (n%x == 0) {
            f.push_back(x);
            n /= x;
            }
        }
        if (n > 1) f.push_back(n);
        return f;
    }
     
    //sieve of Eratosthenes
    //*Complexity : O( n log(log(n)))
    //*
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
     
     
    //Commulative / Prefix Sum
    vector<ll> Prefix_sum (ll n , vector<ll> v){
        for(ll i = 1 ; i < n ; i++){
            v[i]+=v[i-1];
        }
        return v ;
    }
        //cout << v[f] - v[d-1] <<endl; 
        //sum v[d] - >  v[f]
     
        /*v[d]= 1 , v[f] = -1 
        Then commuative sum (Number of occurence in each given query).
        */
        
        
        
    //Maximum subarray sum
    ll mx_subarray(ll n , vector<ll> array ){
    ll best = 0, sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(array[k],sum+array[k]);
        best = max(best,sum);
        }
    return best;
    }
     
     
    void solve(){
        int n ;
        cin >> n ;
        string s;
        map<string,int> names ;
        for(int i = 0 ; i < n  ; i++){
            cin >> s ;
            if (names.find(s) != names.end()){
                
                cout<< s << names[s]<<endl;
                names[s]++;
                
            }
            else{
                cout << "OK" <<endl;
                names[s]=1;
                
            }
        }
        
    }

    int main() {
        fast
        int t = 1 ;
        //cin >> t ;
        while(t--){
            solve();
        }
       return 0;
    
    }