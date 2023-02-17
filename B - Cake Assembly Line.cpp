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
        int n, w, h;
    	cin >> n >> w >> h;
    	vector<int> cake(n),disp(n);
    	for(auto& i:cake) cin >>i;
    	for(auto& i:disp) cin >>i;
    	int diff=cake[0]-disp[0];
    	for(auto& i:disp) i+=diff;
    	int min=INT_MAX,max=0;
    	for(int i=0;i<n;i++)
    	{
    		diff=cake[i]-disp[i];
    		if(diff<min)
    		{
    			min=diff;
    		}
    		if(diff>max)
    		{
    			max=diff;
    		}
    	}
    	if(max-min > 2*(w-h))
    	{
    		cout<<"NO\n";
    	}
    	else
    	{
    		cout<<"YES\n";
    	}
     
    }
     
    int main(){
        fast;
        int  t;
        cin >> t;
        while(t--){
            solve();
        }
     
    }
