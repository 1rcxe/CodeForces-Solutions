
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
    vector<string> v(n);
    for (int i = 0 ; i < n  ; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int c=count(v.begin(),v.end(),v[0]),c1=count(v.begin(),v.end(),v[n-1]);
    if (c > c1){
        cout << v[0]<<endl;
    }
    else{
        cout << v [n-1] <<endl;
    }


}
