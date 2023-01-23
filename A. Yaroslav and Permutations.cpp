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
    int n ;
    cin >> n ;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i ++){
        cin >> v[i];
    }
    int max_apperance=0;
    for(int i = 0 ; i < n ; i++){
        int apperance=count(v.begin(), v.end(), v[i]);
        if (apperance > max_apperance){
            max_apperance=apperance;
        }
    }
    if (max_apperance>n/2+1){
        cout << "NO" <<endl;
    }
    else{
        if (max_apperance == n/2+1 && (n==100 || n==2)){
            cout << "NO"<<endl;}
        else{
            cout<< "YES" <<endl;
    }}




}
