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

void fillPrefixSum(ll arr[], ll n, ll prefixSum[]){
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    prefixSum[i] = prefixSum[i - 1] + arr[i];
}

int main(){
    ll n , m ;
    vector<ll> cities , towers;
    cin >> n >> m ;
    for (int i= 0 ; i < n ; i ++ ){
        ll x ;
        cin >> x ;
        cities.push_back(x);
    }
    for (int i= 0 ; i < m ; i ++ ){
        ll x ;
        cin >> x ;
        towers.push_back(x);
    }
    int j=0;
    ll r=0;
        for(int i = 0; i < n; ++i) {
        while(j+1<m && abs(cities[i]-towers[j])>=abs(cities[i]-towers[j+1])){
                ++j;
        }
            r = max(r, abs(cities[i] - towers[j]));
        }
        cout << r <<endl;
        }

