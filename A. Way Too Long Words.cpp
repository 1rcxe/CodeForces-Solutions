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
    string s ;
    int n ;
    cin >> n ;
    while(n--){
    cin >> s;
    if (s.length()>10){
        cout << s[0] << s.length()-2 << s[s.length()-1] <<endl;
    }
    else{
        cout << s << endl;
    }

}
}