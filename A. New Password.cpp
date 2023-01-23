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
    int n ,k;
    string s="";
    cin >> n >> k ;
    for (int i = 0 ; i < k ; i++){
            s+=char(97+i);
            continue;
        }

    n=n-k;
    int i = 0;
    while(n--){
        if (i==s.length()){
            i = 0 ;
        }
        s += s[i];
        i++;
        }

    cout << s <<endl;


}
