
#include <bits/stdc++.h>
#include <algorithm>
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
    ll n , k;
    cin >> n >> k ;
    if (n%2==0){
        if (k <= n/2){
            cout << k * 2 - 1<<endl;
        }
        else{
            cout << (k-n/2)*2 << endl;
        }

    }
    else{
        if (k <= n/2+1){
            cout << k * 2 - 1<<endl;
        }
        else{
            cout << (k-(n/2+1))*2 << endl;
        }

    }



}
